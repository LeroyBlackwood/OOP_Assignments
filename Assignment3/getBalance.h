#include <iostream>
#include "removeScroll.h"
#include "getBalance.h"
#include <dos.h>
#include <stdlib.h>
#include <iomanip>


class Account{
private:
double balance;
public:
    Account(double init_balance){
        xYZBankName();
        cout << setw(85) <<
        "Enter an initial balance: $";
        cin >> init_balance;
        clearScreen(500);
        if(init_balance >= 1000)
        {
            balance = init_balance;
        }

         else{
            balance = 0.0;
            xYZBankName();
            cout << setw(75) <<
                 "Error:"
                 << endl
                 <<setw(87) <<
                 "The initial balance is invalid!"
                 <<endl
                 << setw(98) <<
                 "Initial must be greater than or equal to $1000.00."
                 << endl;
            clearScreen(2000);
            }
    }
    Account(){};


    /**void setBalance(void){
    This is not to be used. ordered by Sir.

    }*/

    double getBalance();

      bool deposit(double amount)
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

           bool withdraw(double amount)
            {
                cout << endl << setw(88) << "Enter the amount to withdraw: $";
                cin >> amount;
                clearScreen(500);
                if(amount > balance){
                        xYZBankName();
                    cout << setw(95) << endl << "Error: Debit amount exceeded account balance!" << endl;
                }
                else
                {
                    balance -= amount;
                    xYZBankName();
                      cout << endl << setw(90) << "The amount you have withdrawn is: $" << amount << endl;
                      cout << setw(85) << "The remaining balance is: $" << balance << endl;
                }
                 return true;
            }

            bool xYZBankName()
                    {
                        cout << endl << setw(82)
                         << endl << endl << endl << endl << endl
                         << endl << endl << endl << endl << endl
                         << endl << endl<< endl << endl << endl <<
                         "///  XYZ Bank ATM  \\\\\\"
                         << endl << endl;

                         return true;
                 }

         bool clearScreen(int sleep)
            {
                 Sleep(sleep);
                 system("cls");
                 return true;
         }

};
