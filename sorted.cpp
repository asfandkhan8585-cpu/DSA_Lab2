#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}
void testsortedarray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}
void testunsortedarray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}
void testduplicatevalues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}
void testsingleelement() {
    int arr[] = {10};
    assert(isSorted(arr, 1) == true);
}
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}
void testNegativeValues() {
    int arr[] = {-10, -5, -2, 0, 4};
    assert(isSorted(arr, 5) == true);
}
void testequalvalues() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}
void testemptyarray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}
int main() {
    testsortedarray();
    testunsortedarray();
    testduplicatevalues();
    testsingleelement();
    testDescendingArray();
    testNegativeValues();
    testequalvalues();
    testemptyarray();

    cout << "All tests passed successfully!" << endl;
    return 0;
}
