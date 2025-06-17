#include <iostream>
using namespace std;

int main() {
    float total = 0, produto, pagamento;
    for (int i = 1; i <= 5; i++) {
        cout << "Digite o valor do produto " << i << ": ";
        cin >> produto;
        total += produto;
    }
    cout << "Digite o valor pago: ";
    cin >> pagamento;
    cout << "Troco: " << pagamento - total << endl;
    return 0;
}
