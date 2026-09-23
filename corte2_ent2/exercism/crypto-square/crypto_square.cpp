#include "crypto_square.h"

#include <cctype>
#include <cmath>

namespace crypto_square {

Cipher::Cipher(const std::string& text) : text(text) {
}

std::string Cipher::normalized_cipher_text() const {

    std::string cleaned;

    for (char c : text) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            cleaned += std::tolower(static_cast<unsigned char>(c));
        }
    }

    if (cleaned.empty()) {
        return "";
    }

    int columns = static_cast<int>(
        std::ceil(std::sqrt(cleaned.size()))
    );

    int rows = static_cast<int>(
        std::ceil(
            static_cast<double>(cleaned.size()) / columns
        )
    );

    std::string result;

    for (int column = 0; column < columns; column++) {

        for (int row = 0; row < rows; row++) {

            int index = row * columns + column;

            if (index < static_cast<int>(cleaned.size())) {
                result += cleaned[index];
            } else {
                result += " ";
            }
        }

        if (column < columns - 1) {
            result += " ";
        }
    }

    return result;
}

Cipher cipher(const std::string& text) {
    return Cipher(text);
}

}
