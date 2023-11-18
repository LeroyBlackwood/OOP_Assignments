#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <string>
#include "removeScroll.h"
#include "AccountClass.h"
#include "Assignment2_SavingsAccount.h"
#include "Assignment2_CheckingAccount.h"
#include "Transactions.h"
#include "Assignment2_SavingsAccount.cpp"
#include "Assignment2_CheckingAccount.cpp"
#include "Transactions.cpp"


using namespace std;
int restart = 1;
double init_balance;
float rate;
double fee;
double amount;
int selectAccount;
int option;
string accountType;

bool XYZBankTransactions(string accountSelection);



#endif // MAIN_H_INCLUDED
