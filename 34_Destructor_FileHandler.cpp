#include <iostream>
using namespace std;

class FileHandler {
public:
    string fileName;
    
    FileHandler(string name) : fileName(name) {
        cout << "File " << fileName << " opened" << endl;
    }
    
    ~FileHandler() {
        cout << "File " << fileName << " closed" << endl;
    }
};

int main() {
    FileHandler file("data.txt");
    
    return 0;
}
/* Output:
File data.txt opened
File data.txt closed
*/
