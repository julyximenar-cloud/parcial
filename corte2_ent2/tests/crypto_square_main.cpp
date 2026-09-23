#include <iostream>
#include "../exercism/crypto-square/crypto_square.h"

int main() {

    crypto_square::Cipher prueba("Hello World");

    std::cout << prueba.normalized_cipher_text() << std::endl;

    return 0;
}
