#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            // either extend the previous subarray or start a new one
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> nums2 = {1};
    vector<int> nums3 = {5,4,-1,7,8};

    cout << s.maxSubArray(nums1) << endl; // Output: 6
    cout << s.maxSubArray(nums2) << endl; // Output: 1
    cout << s.maxSubArray(nums3) << endl; // Output: 23

    return 0;
}
