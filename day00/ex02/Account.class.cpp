#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


Account::Account( int initial_deposit ) {
	_displayTimestamp();
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << "index:" << _accountIndex 
	<< ";amount:" << _amount
	<< ";deposits:" << deposit
	<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount 
	<< ";withdrawals:";
	if (_amount < withdrawal) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << withdrawal
	<< ";amount:" << _amount
	<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	static time_t		t;
	static struct tm	*current_time;

	if (!current_time)
	{
		t = time(0);
		current_time = localtime(&t);
	}

	std::cout << '['
			<< current_time->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << current_time->tm_mon
			<< std::setw(2) << std::setfill('0') << current_time->tm_mday << '_'
			<< std::setw(2) << std::setfill('0') << current_time->tm_hour
			<< std::setw(2) << std::setfill('0') << current_time->tm_min
			<< std::setw(2) << std::setfill('0') << current_time->tm_sec << "] ";
}

Account::Account( void ) {
	return;
}