#include <iostream>
#include <cmath>
#include "pch.h"

using namespace std;

double f(const double a);

int main() {
    double x, y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    double r = (f(3) + f(x + 1) + 1) / (1 - f(y + 1) * f(y + 1));

    cout << "Result = " << r << endl;

    return 0;
}

double f(const double a) {
    return (a * a + 1) / (sin(a) * sin(a) + 1);
}