#include <iostream>
#include "../leetcode/1797_AuthenticationManager/main.cpp"

int main() {

    AuthenticationManager manager(5);

    manager.generate("token1", 1);

    std::cout << "Tokens activos: "
              << manager.countUnexpiredTokens(2)
              << std::endl;

    return 0;
}
