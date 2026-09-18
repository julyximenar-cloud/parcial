#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int precioMinimo = prices[0];
        int mayorGanancia = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < precioMinimo) {
                precioMinimo = prices[i];
            }

            int ganancia = prices[i] - precioMinimo;

            if (ganancia > mayorGanancia) {
                mayorGanancia = ganancia;
            }
        }

        return mayorGanancia;
    }
};
