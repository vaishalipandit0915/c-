#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    
public:
    BankAccount() : balance(0) {}
    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    cout << "Balance: " << acc.getBalance() << endl;
    
    return 0;
}
/* Output:
Deposited: 1000
Balance: 1000
*/
