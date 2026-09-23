#include <string>
#include <unordered_map>

class AuthenticationManager {
private:
    int timeToLive;
    std::unordered_map<std::string, int> tokens;

public:
    AuthenticationManager(int timeToLive) {
        this->timeToLive = timeToLive;
    }

    void generate(std::string tokenId, int currentTime) {
        tokens[tokenId] = currentTime + timeToLive;
    }

    void renew(std::string tokenId, int currentTime) {
        if (tokens.find(tokenId) != tokens.end()) {
            if (tokens[tokenId] > currentTime) {
                tokens[tokenId] = currentTime + timeToLive;
            }
        }
    }

    int countUnexpiredTokens(int currentTime) {
        int count = 0;

        for (auto token : tokens) {
            if (token.second > currentTime) {
                count++;
            }
        }

        return count;
    }
};
