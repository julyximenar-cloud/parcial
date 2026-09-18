#include <iostream>
#include <string>
#include <stdexcept>

namespace hamming {
    int compute(std::string strand_a, std::string strand_b) {
        // Validar que tengan la misma longitud
        if (strand_a.length() != strand_b.length()) {
            throw std::domain_error("Las cadenas deben tener la misma longitud.");
        }
        
        int distancia = 0;
        // Contar las diferencias
        for (size_t i = 0; i < strand_a.length(); i++) {
            if (strand_a[i] != strand_b[i]) {
                distancia++;
            }
        }
        
        return distancia;
    }
}

int main() {
    std::cout << "--- Resultados de Hamming Distance ---\n\n";
    
    // Caso 1: Cadenas idénticas (Distancia debe ser 0)
    std::string a1 = "GGACTGAAATCTG";
    std::string b1 = "GGACTGAAATCTG";
    std::cout << "1. Cadenas: " << a1 << " y " << b1 << "\n";
    std::cout << "   Distancia calculada: " << hamming::compute(a1, b1) << "\n\n";
    
    // Caso 2: Cadenas con diferencias (Distancia debe ser 9)
    std::string a2 = "GGACGGATTCTG";
    std::string b2 = "AGGACGGATTCT";
    std::cout << "2. Cadenas: " << a2 << " y " << b2 << "\n";
    std::cout << "   Distancia calculada: " << hamming::compute(a2, b2) << "\n\n";
    
    // Caso 3: Cadenas de diferente longitud (Debe lanzar error)
    std::cout << "3. Prueba de error (longitudes diferentes):\n";
    try {
        hamming::compute("AATG", "AAA");
    } catch (const std::domain_error& e) {
        std::cout << "   Exito: Excepcion capturada -> " << e.what() << "\n";
    }

    return 0;
}
