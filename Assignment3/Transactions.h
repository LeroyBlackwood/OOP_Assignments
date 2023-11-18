#ifndef TRANSACTIONS_H_INCLUDED
#define TRANSACTIONS_H_INCLUDED
#include <string.h>

using namespace std;

class Transaction{
protected:
    double amount;
    string type;
public:
    Transaction(double amt, string kind);
    Transaction();
    string report(string accountType);

};

#endif // TRANSACTIONS_H_INCLUDED
