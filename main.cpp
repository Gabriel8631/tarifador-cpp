#include <iostream>
#include <iomanip> // Biblioteca para formatar as casas decimais

using namespace std;

int main() {
    // Variáveis do nosso tarifador
    int duracaoMinutos;
    double tarifaPorMinuto = 0.50; // Tarifa fixa de 50 centavos
    double valorTotal;

    // Interface no terminal
    cout << "=============================" << endl;
    cout << "    SISTEMA DE TARIFACAO     " << endl;
    cout << "=============================" << endl;
    
    cout << "Digite a duracao da chamada (em minutos): ";
    cin >> duracaoMinutos; // Lê o que o usuário digitar

    // Cálculo da tarifa
    valorTotal = duracaoMinutos * tarifaPorMinuto;

    // Exibe o resultado formatado com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "-> O valor total a ser cobrado e: R$ " << valorTotal << endl;
    cout << "=============================" << endl;

    return 0;
}
