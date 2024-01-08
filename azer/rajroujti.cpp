#include <iostream>

using namespace std;

class LoveMessage {
public:
    void printMessage() {
        for (int i = 0; i < 100; i++) {
            cout << "nhebb arij w nmout aaleha <3" << endl;
        }
    }
};

int main() {
    LoveMessage love;
    love.printMessage();

    return 0;
}
