#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    
    Book(string t, string a) {
        title = t;
        author = a;
        cout << "Parameterized Constructor Called" << endl;
    }
    
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book b("C++", "Bjarne");
    b.display();
    
    return 0;
}
/* Output:
Parameterized Constructor Called
Title: C++, Author: Bjarne
*/
