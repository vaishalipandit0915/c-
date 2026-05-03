#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int *pages;
    
    Book(string t, int p) : title(t) {
        pages = new int(p);
        cout << "Book \"" << title << "\" created with " << *pages << " pages" << endl;
    }
    
    ~Book() {
        delete pages;
        cout << "Book \"" << title << "\" destroyed" << endl;
    }
};

int main() {
    Book b("C++", 500);
    
    return 0;
}
/* Output:
Book "C++" created with 500 pages
Book "C++" destroyed
*/
