#include <iostream>
using namespace std;

class String {
public:
    char str[100];
    
    int length() {
        int len = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            len++;
        }
        return len;
    }
};

int main() {
    String s;
    s.str[0] = 'H';
    s.str[1] = 'e';
    s.str[2] = 'l';
    s.str[3] = 'l';
    s.str[4] = 'o';
    s.str[5] = '\0';
    
    cout << "String: " << s.str << endl;
    cout << "Length: " << s.length() << endl;
    
    return 0;
}
/* Output:
String: Hello
Length: 5
*/
