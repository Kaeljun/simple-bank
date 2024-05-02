#include <iostream>
#include "Account.hpp"
using namespace std;

int main() {
    Account Conta1("Michael Junges", "12312312399", "111111");
    Conta1.deposit(500.00);
    cout << "Seu saldo atual eh: " << Conta1.getBalance() << endl;
    float saque;
    cout << "Digite quanto deseja sacar: ";
    cin >> saque;
    cout << "Seu saldo agora é de: " << Conta1.getBalance() << endl;
    return 0;
};