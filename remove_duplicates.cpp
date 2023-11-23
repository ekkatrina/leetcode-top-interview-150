#include <iostream>
#include <vector>
int removeDuplicates(std::vector<int>& nums) {
    int j = 0;
    for(int i = 0; i < nums.size() - 1; i++) {
        if(nums[i] != nums[i + 1]) {
            nums[j++] = nums[i];
        }
    }
    nums[j++] = nums[nums.size() - 1];
    return j;
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cout << removeDuplicates(nums) << std::endl;
    for(int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
