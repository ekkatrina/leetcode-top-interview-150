#include <iostream>
#include <vector>
int removeDuplicates(std::vector<int>& nums) {
    int j = 0;
    if(nums.size() < 3) {
        return nums.size();
    }
    for(int i = 0; i < nums.size() - 2 ; i++) {
        if(nums[i] != nums[i + 2]) {
            nums[j++] = nums[i];
        }
    }
    nums[j++] = nums[nums.size() - 2];
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
