#ifndef ACCOUNTCLASS_H_INCLUDED
#define ACCOUNTCLASS_H_INCLUDED

#include <iostream>
#include <dos.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class Account
{
protected:
    double balance;
public:
    Account(double init_balance);
    /**void setBalance(void){
    This is not to be used. ordered by Sir.
    }*/
    Account() {};
    double getBalance();
    bool deposit(double amount);
    bool withdraw(double amount);
    bool xYZBankName();
    bool clearScreen(int sleep);
};



#endif // ACCOUNTCLASS_H_INCLUDED
