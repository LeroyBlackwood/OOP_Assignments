#ifndef ASSIGNMENT2_SAVINGSACCOUNT_H_INCLUDED
#define ASSIGNMENT2_SAVINGSACCOUNT_H_INCLUDED

#include <iostream>
using namespace std;

class SavingAccount : public Account
{
private:
    float interestRate;
public:

    SavingAccount(double init_balance, float rate);
    double calcInterest();
    double getBalance();

};

#endif // ASSIGNMENT2_SAVINGSACCOUNT_H_INCLUDED
