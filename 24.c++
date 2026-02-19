#include <iostream>
using namespace std;

class BankAccount {
private:
    string acctHolder;
    long accNo;
    double bal;

    // Private function for validation (Logic validation + Data hiding)
    bool isValidAmount(double amt) {
        return amt > 0;
    }

public:
    // Parameterized constructor
    BankAccount(string name, long number, double initialBal) {
        acctHolder = name;
        accNo = number;

        if (initialBal >= 0)
            bal = initialBal;
        else
            bal = 0;
    }

    // Read-only access (Getters)
    string getAccHolder() {
        return acctHolder;
    }

    long getAccNumber() {
        return accNo;
    }

    double getBalance() {
        return bal;
    }

    // Controlled modification (Encapsulation)
    void deposit(double amt) {
        if (isValidAmount(amt)) {
            bal += amt;
            cout << "Deposited: " << amt << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw(double amt) {
        if (isValidAmount(amt) && amt <= bal) {
            bal -= amt;
            cout << "Withdrawn: " << amt << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount b("Anurag", 1200, 1000);

    b.deposit(2000);
    b.withdraw(3000);

    cout << "Account Holder: " << b.getAccHolder() << endl;
    cout << "Account Number: " << b.getAccNumber() << endl;
    cout << "Balance: " << b.getBalance() << endl;

    return 0;
}