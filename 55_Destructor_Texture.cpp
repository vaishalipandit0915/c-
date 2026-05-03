#include <iostream>
using namespace std;

class Texture {
private:
    unsigned char *textureData;
    int width, height;
    
public:
    Texture(int w, int h) : width(w), height(h) {
        textureData = new unsigned char[w * h * 4];
        cout << "Texture " << w << "x" << h << " loaded" << endl;
    }
    
    ~Texture() {
        delete[] textureData;
        cout << "Texture unloaded" << endl;
    }
};

int main() {
    Texture tex(256, 256);
    
    return 0;
}
/* Output:
Texture 256x256 loaded
Texture unloaded
*/
