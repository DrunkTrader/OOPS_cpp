/*
 - Encapsulation = bundling data and the functions that operate on it inside a class
 - usually, data is kept 'private'
 - access is controlled through 'public' methods
 - main benefit: protect the object's state from invalid changes
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance)
            return false;

        balance -= amount;
        return true;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    account.deposit(500);
    account.withdraw(200);

    cout << account.getBalance(); // 1300

    // account.balance = -5000;   // ERROR: private
}
