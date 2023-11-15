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
#include <fstream>
#include "removeScroll.cpp"
#include <vector>
#include <iostream>




int main()
{


    HWND hWnd=GetConsoleWindowNT();
    MoveWindow(hWnd,80,20,1200,720,TRUE);
    ShowScrollBar(GetConsoleWindow(), SB_VERT, 0);

            Account account;
            Account acc;
            Transaction transac;

    system("color 90");
    ofstream myFile;
     try
    {

        myFile.open("Transactions.txt");
        if(!myFile.is_open())
        {
        throw runtime_error("Unable to open file");
        }

    }
         catch (const exception& e)
        {
            cerr << e.what() << endl;
        }

    while(restart == 1)
    {
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
                    ///Get Balance
                case 1:
                   {
                    saving.xYZBankName();
                    cout << setw(78) << "Your balance is: " << saving.getBalance();
                    saving.clearScreen(3000);
                    break;}

                    ///Deposit
                case 2:
                    {
                    saving.xYZBankName();
                    cout << endl << setw(83) <<
                    "Enter the amount to deposit: $";
                        cin >> amount;
                    saving.deposit(amount);
                    Transaction transac(amount, "Credit/Deposit Transaction");
                    account.storeTransacInfo(transac);
                    myFile << account.report() << "\n \n";
                        cout << account.report();
                        saving.clearScreen(3000);
                    break;
                    }

                case 3:
                   {
                   saving.xYZBankName();
                   cout << endl << setw(88) << "Enter the amount to withdraw: $";
                    cin >> amount;
                   saving.withdraw(amount);
                    Transaction transac(amount, "Debit/Withdraw Transaction");
                    account.storeTransacInfo(transac);
                    myFile << account.report() << "\n \n";
                     cout << account.report();
                    saving.clearScreen(3000);
                    }

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
                    {
                        checking.xYZBankName();
                       cout << setw(78) << "Your balance is: " << checking.getBalance();

                        checking.clearScreen(3000);
                        break;
                    }


                case 2:
                    {
                        checking.xYZBankName();
                        cout << endl << setw(88) << "Enter the amount to deposit: $";
                            cin >> amount;
                        checking.deposit(amount);
                        Transaction transac(amount, "Credit/deposit Transaction");
                       account.storeTransacInfo(transac);
                        myFile << account.report() << "\n \n";
                         cout << account.report();
                        checking.clearScreen(3000);
                        break;

                    }

                case 3:
                    {
                        checking.xYZBankName();
                        cout << endl << setw(88) << "Enter the amount to withdraw: $";
                            cin >> amount;
                        checking.withdraw(amount);
                        Transaction transac(amount, "Debit/Withdraw Transaction");
                          account.storeTransacInfo(transac);
                            myFile << account.report() << "\n \n";
                             cout << account.report();
                        checking.clearScreen(3000);
                    }

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
            restart = 0;
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

 myFile.close();


    return 0;
}
