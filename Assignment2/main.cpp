/**
Group 1
Leroy Blackwood  2201013575
Rushain Miller   1500183681
Shewae Graham    2101012698
Matthew Saunder  2201011658
Donald Graham    2201010374
Alanna Thomas    2101013301
*/

#include "main.h"
#include "removeScroll.cpp"



int main()
{


    HWND hWnd=GetConsoleWindowNT();
    MoveWindow(hWnd,80,20,1200,720,TRUE);
    ShowScrollBar(GetConsoleWindow(), SB_VERT, 0);

    system("color 90");

    while(restart == 1)
    {
        Account account;
        account.xYZBankName();
        cout << setw(85) << "Please select an account: " << endl << endl;
        cout << setw(77) << "1. Savings Account" << endl;
        cout << setw(78) << "2. Checking Account" << endl;
        cout << setw(66) << "3. Exit" << endl << endl;

        cout << setw(68) << "Account: ";
        cin >> selectAccount;
        account.clearScreen(1000);


        switch(selectAccount)
        {
        case 1:
        {
            restart = 2;
            SavingAccount saving(init_balance, rate);


            do
            {

                saving.xYZBankName();
                cout << setw(78) << "Savings Account" << endl << endl;

                cout << endl << setw(79) << "Select an Option: " << endl << endl;
                cout << setw(86) << "1. Check Account Balance" << endl;
                cout << setw(79) << "2. Credit Account" << endl;
                cout << setw(78) << "3. Debit Account" << endl;
                cout << setw(69) << "4. Exit" << endl << endl;
                cout << setw(70) << "Option: ";
                cin >> option;
                saving.clearScreen(1000);

                switch(option)
                {

                case 1:
                    saving.xYZBankName();
                    cout << endl << setw(78) << "Your balance is: $"
                         << saving.getBalance() << endl;
                    saving.clearScreen(3000);
                    break;

                case 2:
                    saving.xYZBankName();
                    saving.deposit(amount);
                    saving.clearScreen(3000);

                    break;
                case 3:
                    saving.xYZBankName();
                    saving.withdraw(amount);
                    cout << setw(85) << "The remaining balance is: $" << saving.getBalance() << endl;
                    saving.clearScreen(3000);

                    break;
                case 4:
                    restart = 1;
                    break;
                default:
                    saving.xYZBankName();
                    cout << endl << setw(80) <<
                         "Invalid response!"
                         << endl <<
                         setw(80) << "Please try again."
                         << endl;
                    saving.clearScreen(3000);
                };
            }
            while(restart == 2);
            break;

        }


        case 2:

        {
            restart = 2;
            CheckingAccount checking(init_balance, fee);

            do
            {
                checking.xYZBankName();
            cout << setw(78) << "Checking Account" << endl << endl;
                cout << endl << setw(79) << "Select an Option: " << endl << endl;
                cout << setw(86) << "1. Check Account Balance" << endl;
                cout << setw(79) << "2. Credit Account" << endl;
                cout << setw(78) << "3. Debit Account" << endl;
                cout << setw(69) << "4. Exit" << endl << endl;
                cout << setw(70) << "Option: ";
                cin >> option;
                checking.clearScreen(1000);

                switch(option)
                {

                case 1:
                    checking.xYZBankName();
                    cout << endl << setw(78) << "Your balance is: $"
                         << checking.getBalance() << endl;
                    checking.clearScreen(3000);
                    break;

                case 2:
                    checking.xYZBankName();
                    checking.deposit(amount);
                    checking.clearScreen(3000);

                    break;
                case 3:
                    checking.xYZBankName();
                    checking.withdraw(amount);
                    checking.clearScreen(3000);

                    break;
                case 4:
                    restart = 1;
                    break;
                default:
                    checking.xYZBankName();
                    cout << endl << setw(80) <<
                         "Invalid response!"
                         << endl <<
                         setw(80) << "Please try again."
                         << endl;
                    checking.clearScreen(3000);
                };
            }while(restart == 2);
            break;
        }
        case 3:
            restart = 1;
            account.xYZBankName();
            system("pause");
            break;

        default:
        {
            cout << "Please see select an account.";
            break;
        }

        }
    }

    return 0;
}
