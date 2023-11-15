#include <iostream>
#include <vector>
#include <fstream>

class Transaction {
public:
    enum class Type { DEPOSIT, WITHDRAW };

    Transaction(double amount, Type type) : amount(amount), type(type) {}

    std::string report() const {
        std::string typeStr = (type == Type::DEPOSIT) ? "Deposit" : "Withdrawal";
        return "Type: " + typeStr + ", Amount: " + std::to_string(amount);
    }

private:
    double amount;
    Type type;
};

class Account {
public:
    void makeTransaction(const Transaction& transaction) {
        transactions.push_back(transaction);
    }

    std::string report() const {
        std::string result = "Transaction History:\n";
        for (const auto& transaction : transactions) {
            result += transaction.report() + "\n";
        }
        return result;
    }

    void saveReportToFile(const std::string& filename) const {
        try {
            std::ofstream file(filename);
            if (file.is_open()) {
                file << report();
                file.close();
                std::cout << "Transaction report saved to " << filename << std::endl;
            } else {
                throw std::runtime_error("Unable to open file for writing.");
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

private:
    std::vector<Transaction> transactions;
};

int main() {
    try {
        // Create an Account
        Account myAccount;

        // Make some transactions
        myAccount.makeTransaction(Transaction(100.0, Transaction::Type::DEPOSIT));
        myAccount.makeTransaction(Transaction(50.0, Transaction::Type::WITHDRAW));

        // Display the transaction report
        std::cout << myAccount.report() << std::endl;

        // Save the transaction report to a file
        myAccount.saveReportToFile("transactions.txt");
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
