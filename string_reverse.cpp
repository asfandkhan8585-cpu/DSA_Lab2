#include <iostream>
using namespace std;
int main() {
    string *s = new string;
    cout << "enter any value in the string : ";
    cin >>*s;
    int size = (*s).size();
    int start=0;
    int end=size-1;

    while (start < end) {
        char temp=(*s)[start];
        (*s)[start]=(*s)[end];
        (*s)[end]=temp;
        start++;
        end--;

    }
    cout << "final string is :" <<*s;
    delete s;
}
