#ifndef ELEC_AS_CPP_BANK
#define ELEC_AS_CPP_BANK

#include <string>

class BankAccount
{
	private:
		std::string owner_;
		std::string account_number_;
		double balance_;
 public:
  	BankAccount(std::string const& owner, std::string const& account_number, double balance = 0.0);
  	std::string GetOwner() const;
  	std::string GetNumber() const;
	double GetBalance() const;
  	void Deposit(double amount);
  	bool Withdraw(double amount);
  	void Print() const;
};
bool Transfer(BankAccount& source_account, BankAccount& target_account, double amount);

#endif