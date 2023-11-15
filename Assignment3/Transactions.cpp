#include "Transactions.h"
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

string Transaction :: report()
    {
            stringstream amountt;
            amountt << std::fixed << std::setprecision(2) << amount;
        return  "Transaction Type: " + type + "\n" + "Transaction Amount: " + amountt.str();
    }


