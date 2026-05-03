#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    char *str;
    
    String() {
        str = new char[1];
        str[0] = '\0';
        cout << "Empty String Created" << endl;
    }
    
    String(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        cout << "String Created: " << str << endl;
    }
    
    void display() {
        cout << "String: " << str << endl;
    }
};

int main() {
    String s1;
    String s2("Hello");
    
    s2.display();
    
    return 0;
}
/* Output:
Empty String Created
String Created: Hello
String: Hello
*/
