#include "AccountClass.h"

Account :: Account(double init_balance){
    init_balance = 2000;
    if(init_balance > 0.01)
    {
        balance = init_balance;
    }
    else{balance = 0;}


    }

double Account :: getBalance()
{
    return balance;
};


bool Account :: deposit(double amount)
{
    cout << endl << setw(83) <<
         "Enter the amount to deposit: $";
    cin >> amount;
    balance += amount;
    clearScreen(1000);
    xYZBankName();
    cout << setw(80) << "You have deposited: $" << amount << endl
         << setw(76) << "Thank You!" << endl;
    return true;
}

bool Account :: withdraw(double amount)
{
    cout << endl << setw(88) << "Enter the amount to withdraw: $";
    cin >> amount;
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
        cout << endl << setw(90) << "The amount you have withdrawn is: $" << amount << endl;
    }
    return true;
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
