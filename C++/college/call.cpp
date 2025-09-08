#include <iostream>
using namespace std;

class SwapDemo {
public:
    // Call by Value
    void swapByValue(int x, int y) {
        int temp = x;
        x = y;
        y = temp;
        cout << "Call by Value: a=" << x << " b=" << y << endl;
    }

    // Call by Reference
    void swapByReference(int &x, int &y) {
        int temp = x;
        x = y;
        y = temp;
        cout << "Call by Reference: a=" << x << " b=" << y << endl;
    }

    // Call by Pointer
    void swapByPointer(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
        cout << "Call by Pointer: a=" << *x << " b=" << *y << endl;
    }
};

int main() {
    int a = 10, b = 20;

     SwapDemo o1;  // create object of class

     o1.swapByReference(a, b);
     o1.swapByValue(a, b);
     o1.swapByPointer(&a, &b);

    return 0;
}

