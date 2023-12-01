#include <iostream>
#include <vector>
void rotate(std::vector<int>& nums, int k) { // 1 2 3
    k = k % nums.size();
    std::vector<int> lasts(k);
   for(int i = 0; i < k; i++) {
       lasts[i] = nums[nums.size() - k + i];
   }
   for(int i = nums.size() - 1; i >= k; i--) {
       nums[i] = nums[i - k];
   }
   for(int i = 0; i < k; i++) {
       nums[i] = lasts[i];
   }

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
