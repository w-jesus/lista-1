#include <iostream>
using namespace std;

int main() {
    float milhas;
    cout << "Digite as milhas mar�timas: ";
    cin >> milhas;
    cout << "Quil�metros: " << (milhas * 1852) / 1000 << endl;
    return 0;
}
