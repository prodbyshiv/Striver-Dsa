#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Step 1: find first decreasing element
        while (i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }

        if (i >= 0) {
            // Step 2: find element just bigger than nums[i]
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // Step 3: reverse right part
        reverse(nums.begin() + i + 1, nums.end());
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    sol.nextPermutation(nums);

    cout << "Next permutation: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
