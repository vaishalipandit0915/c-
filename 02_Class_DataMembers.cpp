#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
};

int main() {
    Book book1;
    book1.title = "C++ Primer";
    book1.author = "Stanley Lippman";
    book1.pages = 1000;
    
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Pages: " << book1.pages << endl;
    
    return 0;
}
/* Output:
Title: C++ Primer
Author: Stanley Lippman
Pages: 1000
*/
