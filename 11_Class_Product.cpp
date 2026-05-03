#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;
    
    double calculateTotal() {
        return price * quantity;
    }
};

int main() {
    Product prod;
    prod.name = "Laptop";
    prod.price = 50000;
    prod.quantity = 2;
    
    cout << "Product: " << prod.name << endl;
    cout << "Price: " << prod.price << endl;
    cout << "Quantity: " << prod.quantity << endl;
    cout << "Total: " << prod.calculateTotal() << endl;
    
    return 0;
}
/* Output:
Product: Laptop
Price: 50000
Quantity: 2
Total: 100000
*/
