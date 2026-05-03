#include <iostream>
using namespace std;

class LinkedListNode {
public:
    int data;
    LinkedListNode *next;
    
    LinkedListNode(int d) : data(d), next(NULL) {
        cout << "Node " << data << " created" << endl;
    }
    
    ~LinkedListNode() {
        cout << "Node " << data << " destroyed" << endl;
    }
};

int main() {
    LinkedListNode *head = new LinkedListNode(10);
    head->next = new LinkedListNode(20);
    
    delete head->next;
    delete head;
    
    return 0;
}
/* Output:
Node 10 created
Node 20 created
Node 20 destroyed
Node 10 destroyed
*/
