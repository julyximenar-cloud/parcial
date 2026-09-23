#pragma once

namespace Bankaccount {

class Bankaccount {
public:
    void open();
    void close();
    void deposit(int amount);
    void withdraw(int amount);
    int balance();

private:
    int money = 0;
    bool opened = false;
};

}
