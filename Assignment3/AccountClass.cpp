#include "AccountClass.h"
#include "main.h"
#include <iostream>
#include <iomanip>

using namespace std;

Account :: Account(double init_balance){
    init_balance = 2000;
    if(init_balance > 0.01)
    {
        balance = init_balance;
    }
    else{balance = 0;}


    }

Account :: Account() {};

double Account :: getBalance()
{
    return balance;
};


bool Account :: deposit(double amount)
{

    balance += amount;
    return true;
}

bool Account :: withdraw(double amount)
{
    clearScreen(500);
    if(amount > balance)
    {
        xYZBankName();
        cout << setw(95) << endl << "Error: Debit amount exceeded account balance!" << endl;
    }
    else
    {
        balance -= amount;
        xYZBankName();
    }
    return true;
}


void Account :: storeTransacInfo(Transaction transac)
{
    log.push_back(transac);
}


bool Account :: clearScreen(int sleep)
{
    Sleep(sleep);
    system("cls");
    return true;
}

bool Account :: xYZBankName()
{
    cout << endl << setw(82)
         << endl << endl << endl << endl << endl
         << endl << endl << endl << endl << endl
         << endl << endl<< endl << endl << endl <<
         "///  XYZ Bank ATM  \\\\\\"
         << endl << endl;

    return true;
}

string Account :: report(string accountType)
      {
            string transacReport;
                for (int i; i < log.size(); i++)
                {
                    transacReport = log[i].report(accountType);

                }
    return transacReport;
    }


