#include <iostream>
using namespace std;

class CacheEntry {
private:
    string *key;
    string *value;
    
public:
    CacheEntry(string k, string v) {
        key = new string(k);
        value = new string(v);
        cout << "Cache entry created" << endl;
    }
    
    ~CacheEntry() {
        delete key;
        delete value;
        cout << "Cache entry destroyed" << endl;
    }
};

int main() {
    CacheEntry ce("username", "john_doe");
    
    return 0;
}
/* Output:
Cache entry created
Cache entry destroyed
*/
