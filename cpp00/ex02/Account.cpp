#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(void) {

	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {

	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void) {

	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

Account::Account (int initial_deposit) :	_accountIndex(Account::_nbAccounts),
											_amount(initial_deposit),
											_nbDeposits(0),
											_nbWithdrawals(0) {

	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";created" << std::endl;
}

Account::~Account (void) {

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {

	int	p_amount = this->_amount;

	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {

	int		p_amount = this->_amount;
	bool	is_refused = 0;

	if (p_amount - withdrawal < 0)
		is_refused = 1;
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
	}
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:";
	if (is_refused)
	{
		std::cout 	<< "refused" << std::endl;
		return (0);
	}
	else
	{
		std::cout	<< withdrawal
					<< ";amount:" << this->_amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
	}
	return (1);
}

int		Account::checkAmount(void) const {

	return (1);
}

void	Account::displayStatus(void) const {

	
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp(void) {
	
	std::cout << "[19920104_091532] ";
}

