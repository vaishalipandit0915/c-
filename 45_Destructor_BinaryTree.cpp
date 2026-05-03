#include <iostream>
using namespace std;

class Tree {
private:
    struct Node {
        int data;
        Node *left;
        Node *right;
        
        Node(int d) : data(d), left(NULL), right(NULL) {}
    };
    
    Node *root;
    
    void deleteTree(Node *node) {
        if (node == NULL) return;
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
    
public:
    Tree() : root(NULL) {
        cout << "Tree created" << endl;
    }
    
    ~Tree() {
        deleteTree(root);
        cout << "Tree destroyed" << endl;
    }
};

int main() {
    Tree t;
    
    return 0;
}
/* Output:
Tree created
Tree destroyed
*/
