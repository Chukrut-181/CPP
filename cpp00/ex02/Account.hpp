// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account 
{
	public:		//	PUBLIC MEMBERS ARE ACCESIBLE FROM OUTSIDE THE CLASS

		typedef Account		t;

		static int	getNbAccounts( void );			//	STATIC MEMBER FUNCTIONS OPERATE ON THE CLASS AS A WHOLE, NOT ON SPECIFIC OBJECTS.
        static int	getTotalAmount( void );			//	They can only access static member variables and other static member functions.
        static int	getNbDeposits( void );			//	They cannot access non-static (instance-specific) member variables.
		static int	getNbWithdrawals( void );		//	STATIC MEANS CLASS-SPECIFIC.
		static void	displayAccountsInfos( void );	//	NON-STATIC MEANS INSTANCE-SPECIFIC.

		Account( int initial_deposit );				//	Constructor for the Account Class.
		~Account( void );							//	Destructor for the Accouns Class.

		void	makeDeposit( int deposit );			//	NON -STATIC MEMBER FUNCTIONS OPERATE ON INDIVIDUAL ACCOUNT OBJECTS.
		bool	makeWithdrawal( int withdrawal );
		int		checkAmount( void ) const;
		void	displayStatus( void ) const;


	private:	//	PRIVATE MEMBERS ARE ONLY ACCESIBLE FROM WITHIN THE CLASS ITSELF. 

		static int	_nbAccounts;					//	PRIVATE STATIC MEMBER VARIABLES ARE SHARED ACROSS ALL OBJECTS OF THE ACCOUNT CLASS.
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp( void );		//	Private Static Member Function: Utility function for internal use only. Must be called from inside the class.

		int				_accountIndex;				//	Private Instance Member Variables: UNIQUE TO EACH INDIVIDUAL ACCOUNT OBJECT.
		int				_amount;
		int				_nbDeposits;
		int				_nbWithdrawals;

		Account( void );							//	Private Constructor: Prevents external instantiation without an initial deposit ---
													//	This means `Account my_account;` is forbidden. Accounts must be created with `Account my_account(100);`.

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
