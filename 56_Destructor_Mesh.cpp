#include <iostream>
using namespace std;

class Mesh {
private:
    float *vertices;
    int *indices;
    int vertexCount, indexCount;
    
public:
    Mesh(int vCount, int iCount) : vertexCount(vCount), indexCount(iCount) {
        vertices = new float[vCount * 3];
        indices = new int[iCount];
        cout << "Mesh created with " << vCount << " vertices" << endl;
    }
    
    ~Mesh() {
        delete[] vertices;
        delete[] indices;
        cout << "Mesh destroyed" << endl;
    }
};

int main() {
    Mesh m(1000, 2000);
    
    return 0;
}
/* Output:
Mesh created with 1000 vertices
Mesh destroyed
*/
