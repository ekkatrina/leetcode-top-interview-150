#include <iostream>
#include <vector>
void Merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    std::vector<int> temp;
    int i = 0;
    int j = 0;
    while(i < m && j < n) {
        if(nums1[i] < nums2[j]) {
            temp.push_back(nums1[i]);
            i++;
        } else {
            temp.push_back(nums2[j]);
            j++;
        }
    }
    if(i == m) {
        while(j < n) {
            temp.push_back(nums2[j]);
            j++;
        }
    } else {
        while(i < m) {
            temp.push_back(nums1[i]);
            i++;
        }
    }

    nums1.resize(n + m);
    for(int i = 0; i < n + m; i++) {
        nums1[i] = temp[i];
    }
}
int main() {
    std::vector<int> nums1 = {1, 3, 8, 11, 12, 13, 15};
    std::vector<int> nums2 = {5, 10, 11, 15, 17, 22, 25, 34, 35};
    Merge(nums1, 7, nums2, 9);
    for(int i = 0; i < 16; i++) {
        std::cout << nums1[i] << " ";
    }
    return 0;
}
