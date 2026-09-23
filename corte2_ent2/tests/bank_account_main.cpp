#include <iostream>
#include "../exercism/bank-account/bank_account.h"

int main() {

    Bankaccount::Bankaccount cuenta;

    cuenta.open();
    cuenta.deposit(100);

    std::cout << "Saldo: " << cuenta.balance() << std::endl;

    cuenta.withdraw(40);

    std::cout << "Saldo final: " << cuenta.balance() << std::endl;

    return 0;
}
