#include <iostream>
using namespace std;

class AudioBuffer {
private:
    float *audioData;
    int samples;
    int sampleRate;
    
public:
    AudioBuffer(int numSamples, int rate) : samples(numSamples), sampleRate(rate) {
        audioData = new float[samples];
        cout << "Audio buffer created: " << samples << " samples at " << sampleRate << "Hz" << endl;
    }
    
    ~AudioBuffer() {
        delete[] audioData;
        cout << "Audio buffer destroyed" << endl;
    }
};

int main() {
    AudioBuffer audio(44100, 44100);
    
    return 0;
}
/* Output:
Audio buffer created: 44100 samples at 44100Hz
Audio buffer destroyed
*/
