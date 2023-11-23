#include <iostream>
#include <vector>
int removeElement(std::vector<int>& nums, int val) { //time O(n)
    int j = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return nums.size() - j;
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
    std::cout << removeElement(nums, k) << std::endl;
    for(int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
