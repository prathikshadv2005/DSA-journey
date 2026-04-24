#include<iostream>
using namespace std;

int main() {
    float F, C;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> F;

    C = (F - 32) * 5 / 9;

    cout << "Temperature in Celsius = " << C << endl;

    return 0;
}
