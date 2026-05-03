#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountHolder;
    double balance;
    
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.accountHolder = "John";
    acc.balance = 1000;
    
    acc.deposit(500);
    acc.withdraw(200);
    acc.showBalance();
    
    return 0;
}
/* Output:
Deposited: 500
Withdrawn: 200
Current Balance: 1300
*/
