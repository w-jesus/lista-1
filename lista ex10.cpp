#include <iostream>
using namespace std;

int main() {
    float cotacao, dolares;
    cout << "Digite a cota��o do d�lar e a quantidade: ";
    cin >> cotacao >> dolares;
    cout << "Reais: R$" << cotacao * dolares << endl;
    return 0;
}
