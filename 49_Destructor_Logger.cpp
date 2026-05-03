#include <iostream>
using namespace std;

class Logger {
public:
    string logName;
    
    Logger(string name) : logName(name) {
        cout << "Logger \"" << logName << "\" initialized" << endl;
    }
    
    ~Logger() {
        cout << "Logger \"" << logName << "\" flushed and closed" << endl;
    }
    
    void log(string message) {
        cout << "[" << logName << "] " << message << endl;
    }
};

int main() {
    Logger logger("app.log");
    logger.log("Application started");
    
    return 0;
}
/* Output:
Logger "app.log" initialized
[app.log] Application started
Logger "app.log" flushed and closed
*/
