/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:01:19 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/27 16:48:17 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <string> 
#include <ctime> 
#include <locale> 
#include "Account.hpp"

// diff <(cut -c17- 19920104_091532.log) <(cut -c17- example_log)

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

/************(DE)CONSTRUCTROS************/

Account::Account( int initial_deposit ) {
	
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = this->getNbAccounts();
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->checkAmount()
			<< ";created" << std::endl;
	Account::_nbAccounts++;
	return ;
}

Account::Account( void ) {
	return ;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->checkAmount()
			<< ";closed" << std::endl;
	Account::_nbAccounts--;
	return ;
}

/*************GETTERS***************/

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

int		Account::checkAmount( void ) const {
	return this->_amount;
}

/*************DISPLAY***************/

void	Account::displayAccountsInfos( void ) {
		
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			<< ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits()
			<< ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ) {
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->checkAmount()
			<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->checkAmount()
			<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->checkAmount()
			<< ";withdrawal:";
	if (withdrawal <= this->checkAmount()) {
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << withdrawal;
		std::cout << ";amount:" << this->checkAmount()
				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else {
		std::cout << "refused" << std::endl;
		return (false);
	}
}

void	Account::displayStatus( void ) const {
	
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->checkAmount()
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void ) {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
	
    std::cout << "[" << (now->tm_year + 1900)
    		<< (now->tm_mon + 1)
    		<< now->tm_mday << "_"
			<< now->tm_hour
    		<< now->tm_min
    		<< now->tm_sec << "] ";
    return ;
}
