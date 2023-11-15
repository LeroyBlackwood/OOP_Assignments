#include "AccountClass.h"
#include "AccountClass.cpp"
#include "Assignment2_SavingsAccount.h"


 SavingAccount :: SavingAccount(double init_balance, float rate) : Account(init_balance)
    {
            if ( balance < 9999 )
            {
                rate = 0.0065;
            }
            else if (balance<= 99999 )
            {
                rate = 0.007;
            }
            else if (balance <= 249999 )
            {
                rate = 0.0075;

            }
            else if (balance <= 499999 )
            {
                rate =0.0008;
            }
            else if (balance <= 999999)
            {
                rate = 0.01;
            }
            else if (balance <= 1999999)
            {
                rate = 0.115;
            }
            else if (balance >= 2000000)
            {
                rate = 0.0125;
            }
            else
                {
                rate = 0.0;
            }

        interestRate = rate;

    };

double SavingAccount :: calcInterest()
{
    if(balance > 9999)
    {    return  balance * interestRate;

    }
}

double SavingAccount :: getBalance()
{
    return balance + calcInterest();
}
