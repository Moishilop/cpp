#include "Account.hpp"

int    Account::getNbAccounts()
{   return (Account::_nbAccounts);}
int    Account::getTotalAmount()
{	return (Account::_totalAmount);}
int    Account::getNbDeposits()
{    return (Account::_totalNbDeposits);}
int    Account::getNbWithdrawals()
{    return (Account::_totalNbWithdrawals);}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account() : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts++;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";"<<"amount:"<<Account::checkAmount()<<";created"<<std::endl;
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<Account::checkAmount()<<";created"<<std::endl;
}

void	Account::makeDeposit(int deposit)
{ 
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<checkAmount()<<";deposit:"<<deposit;
	_amount += deposit;
	_nbDeposits++;
	std::cout<<";amount:"<<checkAmount()<<";nb_deposits:"<<_nbDeposits<<std::endl;
	Account::_totalNbDeposits++;
  	Account::_totalAmount = Account::_totalAmount + deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{ 
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<checkAmount();
	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount = Account::_totalAmount - withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else
		std::cout << ";withdrawal:refused"<<std::endl;
	return (Account::_amount); 
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed" << std:: endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= checkAmount();
}

void   Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout<<"accounts:"<<getNbAccounts()<<";total:"<<getTotalAmount()<<";deposits:"<<getNbDeposits()<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

int		Account::checkAmount()const
{ return (Account::_amount ); }

void	Account::displayStatus()const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<checkAmount()<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t ms;
	struct tm *data;
	
	ms = time(NULL);
	data = localtime(&ms);
	std::cout << "[" << data->tm_year + 1900 << std::setfill('0') << std::setw(2) << data->tm_mon + 1 << std::setfill('0') \
	<< std::setw(2) << data->tm_mday << "_" << std::setfill('0') << std::setw(2) << data->tm_hour << std::setfill('0') << std::setw(2) \
	<< std::setfill('0') << std::setw(2) << data->tm_min << std::setfill('0') << std::setw(2) << data->tm_sec << "] ";
}