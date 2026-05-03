#include <iostream>
using namespace std;

class Matrix {
public:
    int **matrix;
    int rows, cols;
    
    Matrix(int r, int c) : rows(r), cols(c) {
        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
        cout << "Matrix " << rows << "x" << cols << " created" << endl;
    }
    
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
        cout << "Matrix destroyed" << endl;
    }
};

int main() {
    Matrix m(3, 3);
    
    return 0;
}
/* Output:
Matrix 3x3 created
Matrix destroyed
*/
