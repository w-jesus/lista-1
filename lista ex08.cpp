#include <iostream>
using namespace std;

int main() {
    float c;
    cout << "Digite a temperatura em Celsius: ";
    cin >> c;
    cout << "Temperatura em Fahrenheit: " << (c * 9 / 5) + 32 << endl;
    return 0;
}
