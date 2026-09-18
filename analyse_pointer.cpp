#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    int iValue = 25;

    cout << "Stack variable:" << endl;
    analyze_pointer(&iValue);

    cout << endl;
    int *heapValue = new int;
    *heapValue = 50;

    cout << "Heap variable:" << endl;
    analyze_pointer(heapValue);

    delete heapValue;

    return 0;
}