#include <iostream>
using namespace std;

class Matrix {
public:
    int rows, cols;
    int matrix[3][3];
    
    Matrix() : rows(0), cols(0) {
        cout << "Matrix Constructor Called" << endl;
    }
    
    Matrix(int r, int c) : rows(r), cols(c) {
        cout << "Matrix Constructor with dimensions" << endl;
    }
};

int main() {
    Matrix m1;
    Matrix m2(3, 3);
    
    cout << "Matrix 1: " << m1.rows << "x" << m1.cols << endl;
    cout << "Matrix 2: " << m2.rows << "x" << m2.cols << endl;
    
    return 0;
}
/* Output:
Matrix Constructor Called
Matrix Constructor with dimensions
Matrix 1: 0x0
Matrix 2: 3x3
*/
