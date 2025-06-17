#include <iostream>
using namespace std;

int main() {
    float milhas;
    cout << "Digite as milhas marítimas: ";
    cin >> milhas;
    cout << "Quilômetros: " << (milhas * 1852) / 1000 << endl;
    return 0;
}
