#include <iostream>
using namespace std;

class Graph {
private:
    int **adjMatrix;
    int vertices;
    
public:
    Graph(int v) : vertices(v) {
        adjMatrix = new int*[vertices];
        for (int i = 0; i < vertices; i++) {
            adjMatrix[i] = new int[vertices];
        }
        cout << "Graph with " << vertices << " vertices created" << endl;
    }
    
    ~Graph() {
        for (int i = 0; i < vertices; i++) {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
        cout << "Graph destroyed" << endl;
    }
};

int main() {
    Graph g(4);
    
    return 0;
}
/* Output:
Graph with 4 vertices created
Graph destroyed
*/
