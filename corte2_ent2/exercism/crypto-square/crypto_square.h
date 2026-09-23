#pragma once

#include <string>

namespace crypto_square {

class Cipher {
public:
    explicit Cipher(const std::string& text);
    std::string normalized_cipher_text() const;

private:
    std::string text;
};

Cipher cipher(const std::string& text);

}

