#include <iostream>
using namespace std;

class Image {
private:
    int *pixelData;
    int width, height;
    
public:
    Image(int w, int h) : width(w), height(h) {
        pixelData = new int[width * height];
        cout << "Image " << width << "x" << height << " created" << endl;
    }
    
    ~Image() {
        delete[] pixelData;
        cout << "Image destroyed" << endl;
    }
};

int main() {
    Image img(800, 600);
    
    return 0;
}
/* Output:
Image 800x600 created
Image destroyed
*/
