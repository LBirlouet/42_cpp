#include "Account.hpp"
#include "string"
#include "iostream"

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0); 
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);


Account::Account(void){
}

Account::Account(int initial_deposit){
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex++;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	_displayTimestamp();
	std::cout<<"index:"<< this->_nbAccounts << ";amount:"<< checkAmount() << ";created"<<std::endl;
	return ;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout<<"index:"<< this->_accountIndex << ";amount:"<< checkAmount() << ";closed"<<std::endl;
}

int	Account::getNbAccounts(void){ 
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposite){
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout<< "index:" << this->_accountIndex <<";p_amout:" << this->_amount << ";deposit:" << deposite << ";amount:" << (this->_amount + deposite) << ";nb_deposits:" <<this->_nbDeposits << std::endl;
	this->_amount += deposite;
	this->_totalAmount += deposite;
}

bool Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	if (this->_amount > withdrawal)
	{
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		std::cout<< "index:" << this->_accountIndex <<";p_amout:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << (this->_amount - withdrawal) << ";nb_withdrawals:" <<this->_nbWithdrawals << std::endl;
		return true;
	}
	std::cout<< "index:" << this->_accountIndex <<";p_amout:" << this->_amount << ";withdrawal:refused"<<std::endl;
	return false;
}

void	Account::_displayTimestamp(void){
	time_t now = time(0);
	std::cout << "[" << now << "_";
	tm *ltm = localtime(&now);
	std::cout << 5+ltm->tm_hour << 30+ltm->tm_min << ltm->tm_sec << "] ";
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "index:"<<Account::_nbAccounts << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits()<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

int	Account::checkAmount(void) const{
	return (this->_amount);
}
void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount;"<< this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals <<std::endl;
	return ;
}