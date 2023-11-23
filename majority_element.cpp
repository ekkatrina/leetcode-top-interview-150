#include <iostream>
#include <vector>   //Moore Voting Algorithm
int majorityElement(std::vector<int>& nums) {
    int majority_element;
    int count = 0;
    for(int i = 0; i <nums.size(); i++) {
        if(count == 0) {
            majority_element = nums[i];
        }
        if(nums[i] == majority_element) {
            count++;
        } else {
            count--;
        }
    }
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] == majority_element)
            count++;
    if (count > nums.size() / 2)
        return majority_element;
    return -1;
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cout << majorityElement(nums) << std::endl;
    return 0;
}
