#include <iostream>
using namespace std;

int main() {
    float cotacao, dolares;
    cout << "Digite a cotação do dólar e a quantidade: ";
    cin >> cotacao >> dolares;
    cout << "Reais: R$" << cotacao * dolares << endl;
    return 0;
}
