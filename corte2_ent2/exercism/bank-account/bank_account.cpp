#include "bank_account.h"

#include <stdexcept>

namespace Bankaccount {

void Bankaccount::open() {

    if (opened) {
        throw std::runtime_error("Account is already open");
    }

    opened = true;
    money = 0;
}

void Bankaccount::close() {

    if (!opened) {
        throw std::runtime_error("Account is already closed");
    }

    opened = false;
}

void Bankaccount::deposit(int amount) {

    if (!opened) {
        throw std::runtime_error("Account is closed");
    }

    if (amount < 0) {
        throw std::runtime_error("Invalid amount");
    }

    money += amount;
}

void Bankaccount::withdraw(int amount) {

    if (!opened) {
        throw std::runtime_error("Account is closed");
    }

    if (amount < 0) {
        throw std::runtime_error("Invalid amount");
    }

    if (amount > money) {
        throw std::runtime_error("Insufficient funds");
    }

    money -= amount;
}

int Bankaccount::balance() {

    if (!opened) {
        throw std::runtime_error("Account is closed");
    }

    return money;
}

}
