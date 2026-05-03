#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountHolder;
    double balance;
    
    BankAccount() {
        accountHolder = "Unknown";
        balance = 0.0;
        cout << "Account Created" << endl;
    }
    
    void display() {
        cout << "Account Holder: " << accountHolder << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.accountHolder = "John";
    acc.balance = 5000;
    
    acc.display();
    
    return 0;
}
/* Output:
Account Created
Account Holder: John, Balance: 5000
*/
