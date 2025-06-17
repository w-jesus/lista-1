#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float d;
    cout << "Digite o diâmetro do círculo: ";
    cin >> d;
    float r = d / 2;
    cout << "Área: " << M_PI * r * r << endl;
    return 0;
}
