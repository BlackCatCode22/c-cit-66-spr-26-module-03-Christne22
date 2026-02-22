// PointersArePowerful.cpp
// Created by Christine on 2/22/26
//
#include <iostream>
//apply namespace std
using namespace std;
int main() {
    int a = 31;
    int *p;
    p = &a;

    cout << "Address in pointer 'p': " << p << endl;
    cout << "Value of 'a' using pointer 'p': " << *p << endl;
    *p = 11;
    // Return Output Statement with new value of a
    cout << "New value of 'a': " << a << endl;

    // New "blank" line
    cout << "\n \n" << endl;
    int arr[5] = {11, 21, 31, 41, 51};
    int *pXray = arr;
    for (int i = 0; i < 5; i++) {
        // Return Output Statement with address of i for each integer in array
        cout << "Address in pointer of arr[" << i << "]: " << (pXray + i) << endl;
        // Return Output Statement with value of i for each integer in array
        cout << "Value of arr[" << i << "]: " << (pXray + i) << endl;
    }
    // Return Zero
    return 0;
}