#include <iostream>
#include <vector>
#include <algorithm>
int maxProfit(std::vector<int>& prices) { // 1 2 3 4 5 6 7 8 9
    int max_profit = 0;
    int lowest_price = prices[0];
    for(int price : prices) {
        if(price < lowest_price) {
            lowest_price = price;
        } else if (price - lowest_price > max_profit) {
            max_profit = price - lowest_price;
        }
    }
    return max_profit;
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    std::cout << maxProfit(prices);
    return 0;
}
