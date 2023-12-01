#include <iostream>
#include <vector>
#include <algorithm>
void rotate(std::vector<int>& nums, int k) { // 1 2 3 4 5 6 7 8 9
    k %= nums.size();
    reverse(nums.begin(),nums.begin()+(nums.size()-k));
    reverse(nums.begin()+(nums.size()-k),nums.end());
    reverse(nums.begin(),nums.end());
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    int k;
    std::cin >> k;
    rotate(nums, k);
    for(int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
