#include <iostream>
#include <dos.h>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;

class Account{
private:
double balance;
public:
    Account(double init_balance){
        cout << "Enter an initial balance: $";
        cin >> init_balance;
        if(init_balance >= 1000)
        {
            balance = init_balance;
        }
         if(balance < 1000){
            balance = 0.0;
            cout   << endl << "Error:" << endl
            <<"The initial balance is invalid!"
            <<endl << "Initial must be greater than or equal to $1000.00." << endl;
            }
//            delay(1000);
            system("cls");
    }

    /**void setBalance(void){
    This is not to be used. ordered by Sir.

    }*/

    double getBalance()
    {
        cout << endl << "Your balance is: $"
        << balance << endl;
    }

      bool deposit(double amount)
      {
        cout << endl << "Enter the amount to deposit: $";
        cin >> amount;
         balance += amount;
         return true;
      }

           bool withdraw(double amount)
            {
                cout << endl << "Enter the amount to withdraw: $";
                cin >> amount;
                if(amount > balance){
                    cout << "Error: Debit amount exceeded account balance!";
                }
                else
                {
                    balance -= amount;
                }
                cout << endl << "The amount you withdraw is: $" << amount << endl;
                cout << "The remaining balance is: $" << balance << endl;
                 return true;
            }

};


int main(){
    system("color 90");
    int restart = 1;
    double amount;
    double init_balance;
     int option;

    Account accUser(init_balance);

    cout << endl << "///  XYZ Bank ATM  \\\\\\" << endl << endl;

    do{
        cout << endl << "Select an Option: " << endl;
        cout << "1. Check Account Balance" << endl;
        cout << "2. Credit Account" << endl;
        cout << "3. Debit Account" << endl;
        cout << "4. Exit" << endl << endl;
        cin >> option;
    switch(option){

        case 1:
            accUser.getBalance();
            break;

        case 2:
            accUser.deposit(amount);
            break;
        case 3:
            accUser.withdraw(amount);
            break;
        case 4:
            restart = 0;
            break;
        default:
            cout << endl << "Invalid response!"<< endl << "Please try again." << endl;
    };
    }while(restart == 1);



    return 0;
}
