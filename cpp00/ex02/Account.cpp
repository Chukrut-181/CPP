/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:41:43 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/12 12:00:00 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>	// For std::cout
# include <iomanip>		// For std::setfill and std::setw
# include <ctime>		// For time operations

//	STATIC MEMBERS (EITHER VARS OR METHODS) BELONG TO THE WHOLE CLASS, NOT TO A SINGLE OBJECT.
//	Must be initialized in .cpp
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Private static timestamp helper (required for logs)
void Account::_displayTimestamp( void )
{
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	// Convert struct tm to char * and assign format in a printf-ish manner.
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer << " ";
}

Account::Account( void )
{
	// This constructor Is here to satisfy the declaration in the .hpp.
	// Yes... but why??
}

//	CONSTRUCTOR
Account::Account( int initial_deposit )
{
	_displayTimestamp();

	_accountIndex = _nbAccounts;		//	Assign current _nbAccounts as _accountIndex, 
	_nbAccounts++;						//	then increment _nbAccounts
	_amount = initial_deposit;

	_totalAmount += initial_deposit;	//	Add to the total amount ACROSS ALL OBJECTS IN THIS CLASS

	_nbDeposits = 0;					// Initialize private member.
	_nbWithdrawals = 0;					// Initialize private member.

	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;	// Output creation log message
}

//	DESTRUCTOR
Account::~Account( void )
{
	_displayTimestamp();	// Print timestamp with helper.
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;	// Log message with final account state prior to destruction-
	_nbAccounts--;	// Decrement the total number of accounts
}

//	STATIC GETTERS

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

//	DEPOSIT
void Account::makeDeposit( int deposit )
{
	int	p_amount;
	
	p_amount = _amount;			//	Save previous amount.
	_amount += deposit;			//	Increment in this account
	_nbDeposits++;				//	Increment in this account
	_totalAmount += deposit;	//	Increment across the whole class.
	_totalNbDeposits++;			//	Increment across the whole class.
	
	_displayTimestamp();		// Print timestamp with helper.
	//	Read  info from locals. Insert into outgoing stream.
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

//	WITHDRAWAL
bool Account::makeWithdrawal( int withdrawal )
{
	int	p_amount;
    p_amount = _amount;			//	Save previous amount.
	
    _displayTimestamp();		//	Print timestamp with helper.
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:";	// Print part of the log that will always be present.

    if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false); 		//	Withdrawal refused and return (false) if not enough funds.
	}
	else
	{
		_amount -= withdrawal;	//	Decrement this account.
		_nbWithdrawals++;		//	Decrement this account.

		_totalAmount -= withdrawal;	//	Decrement across the whole class.
		_totalNbWithdrawals++;		//	Decrement global withdrawal count

		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);			//	Withdrawal successful, return true, and finish printing log.
	}
}

int Account::checkAmount( void ) const
{
    return (_amount);
}

//	PUBLIC *STATIC* DISPLAY METHOD
void Account::displayAccountsInfos( void )
{
	_displayTimestamp();	// Print timestamp with helper.
	
	//	Use *static* getters to read pertinent info. Insert into outgoing stream.
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

//	PUBLIC *MEMBER* DISPLAY METHOD
void Account::displayStatus( void ) const
{
    _displayTimestamp();	// Print timestamp with helper.
	//	Read pertinent info DIRECTLY FROM VARS SINCE WE ARE INSIDE THE CLASS. NO GETTERS HERE. Insert into outgoing stream.
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
