#include <iostream>
#include <string>
#include <cmath>

namespace armstrong_numbers {
    bool is_armstrong_number(int candidate) {
        std::string str_num = std::to_string(candidate);
        int potencia = str_num.length();
        int suma = 0;
        
        for (char digito : str_num) {
            suma += std::pow(digito - '0', potencia);
        }
        
        return suma == candidate;
    }
}

int main() {
    int casos_prueba[] = {9, 10, 153, 154, 9474};
    
    std::cout << "--- Resultados de Armstrong Numbers ---\n";
    for (int num : casos_prueba) {
        if (armstrong_numbers::is_armstrong_number(num)) {
            std::cout << num << " SI es un numero de Armstrong.\n";
        } else {
            std::cout << num << " NO es un numero de Armstrong.\n";
        }
    }
    return 0;
}
