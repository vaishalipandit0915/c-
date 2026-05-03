#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    char *str;
    
    String(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        cout << "String created: " << str << endl;
    }
    
    ~String() {
        delete[] str;
        cout << "String destroyed" << endl;
    }
};

int main() {
    String s("Hello World");
    
    return 0;
}
/* Output:
String created: Hello World
String destroyed
*/
