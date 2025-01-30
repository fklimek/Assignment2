
//Implementation File savingsAccountImp.cpp

#include <iostream>
#include <iomanip>
#include "savingsAccount.h"
  
using namespace std; 

savingsAccount::savingsAccount(int acctNumber, double bal, 
                   double intRate = DEFAULT_INTEREST_RATE_SAVINGS)
       :bankAccount(acctNumber, bal)
{
    interestRate = intRate;
}

double savingsAccount::getInterestRate() const
{
    return interestRate; 
}

void savingsAccount::setInterestRate(double rate)
{
    interestRate = rate;
}

void savingsAccount::withdraw(double amount)
{
    if (balance - amount < 0)
        // write the cout statement
        cout << "Error: Insufficient funds\n";
    else 
        balance = balance - amount;
}

void savingsAccount::postInterest()
{
    balance = balance + balance * interestRate;
 // equation for post interest
}

void savingsAccount::print() const
{
   // print the account information(account number and balance)
    cout << fixed << showpoint << setprecision(2);
    cout << "Interest Savings ACCT#:\t" << accountNumber << endl;
    cout << "\tBalance: $" << balance << endl;
}
