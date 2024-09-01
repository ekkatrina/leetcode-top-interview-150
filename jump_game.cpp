#include <iostream>
#include <vector>
  bool canJump(std::vector<int>& nums) {
    int k = nums.size() - 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] + i >= k) {
            k = i;
        }
    }
    return k = 0;
  }

int main() {
    std::vector<int> nums = {2,3,1,1,4};
    std::cout << canJump(nums);
    return 0;
}
