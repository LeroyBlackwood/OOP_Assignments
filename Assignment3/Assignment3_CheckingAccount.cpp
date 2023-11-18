
#include "AccountClass.h"
#include "Assignment2_CheckingAccount.h"

  CheckingAccount :: CheckingAccount(double init_balance, double fee):Account(init_balance)
    { fee = 30;
        transactionFee = fee;
    };

bool CheckingAccount :: withdraw(double amount)
{
   clearScreen(500);
    if(amount > balance)
    {
        xYZBankName();
        cout << setw(95) << endl << "Error: Debit amount exceeded account balance!" << endl;
    }
    else
    {   xYZBankName();
        cout << setw(60) << "A fee of $" << transactionFee << " will be charged for withdrawal." << endl;
        cout << setw(100) << "Do you wish to continue? Y/y for yes and N/n for no: ";
        cin >> answer;
        clearScreen(500);
         xYZBankName();
        if(answer == 'y' || answer == 'Y'){
                balance -= (amount + transactionFee);
        cout << endl << setw(90) << "The amount you have withdrawn is: $" << amount << endl;
        cout << setw(85) << "The remaining balance is: $" << getBalance() << endl;

    }

        else if(answer == 'n' || answer == 'N'){
            cout << setw(82) << "Withdrawal Terminated." << endl;
        }
        else
            {
            cout << setw(80) << "Invalid Response." << endl;
    }
        }


    return true;
}

double CheckingAccount :: returnWithdrawFee()
{ if(answer == 'y' || answer == 'Y')
        return transactionFee;
    else
    {
        return 0;
    }
};


