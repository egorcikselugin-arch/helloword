#pragma once
#include <iostream>

using namespace std;

void print() {
    cout << "Hello World!" << endl;
    int x;
    cout << "input x: ";
    cin >> x;
    if (x != 0) {
        cout << 100.0 / x << endl;
    }
}
