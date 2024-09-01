#include <iostream>
#include <vector>

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    std::cout << profit;
    return 0;
}
