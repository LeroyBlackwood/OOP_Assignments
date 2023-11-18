#ifndef ASSIGNMENT2_CHECKINGACCOUNT_H_INCLUDED
#define ASSIGNMENT2_CHECKINGACCOUNT_H_INCLUDED

#include <iostream>
using namespace std;

Account account();
class CheckingAccount : public Account
{
private:
    double transactionFee;
public:
    CheckingAccount(double init_balance, double fee);

    CheckingAccount() : Account() {};

    bool withdraw(double amount);
    double returnWithdrawFee();

};

#endif // ASSIGNMENT2_CHECKINGACCOUNT_H_INCLUDED
