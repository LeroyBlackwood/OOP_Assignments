#include "Transactions.h"
#include "AccountClass.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

Transaction :: Transaction(double amt, string kind)
{
    amount = amt;
    type = kind;
}

Transaction :: Transaction (){};

string Transaction :: report(string accountType)
      {
           string accType = accountType;
            stringstream amountt;
            amountt << fixed << setprecision(2) << amount;
        return   "\n\t\t\t\t\t\t  Account Type:\t\t" + accType + "\t\t\t\t\t\t  Transaction Type:\t" + type +
        "\n" + "\t\t\t\t\t\t  Transaction Amount:\t$" + amountt.str();
    }


