#include <iostream>
using namespace std;

class ThreadPool {
private:
    int *threads;
    int threadCount;
    
public:
    ThreadPool(int count) : threadCount(count) {
        threads = new int[threadCount];
        cout << "Thread pool created with " << threadCount << " threads" << endl;
    }
    
    ~ThreadPool() {
        delete[] threads;
        cout << "Thread pool destroyed and all threads terminated" << endl;
    }
};

int main() {
    ThreadPool pool(4);
    
    return 0;
}
/* Output:
Thread pool created with 4 threads
Thread pool destroyed and all threads terminated
*/
