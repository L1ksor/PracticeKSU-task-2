﻿

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "Hello World!\n";
    cout << "A + B = " << a + b << '\n'
        << "A - B = " << a - b << '\n'
        << "A * B = " << a * b << '\n'
        << "A / B = " << a / b << '\n'
        << (a > b ? a : b) << '\n'
        << (a < b ? a : b) << '\n';
}


