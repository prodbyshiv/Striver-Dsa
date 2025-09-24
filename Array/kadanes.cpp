#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;   // start with very small number

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            // update maxi
            if (sum > maxi) {
                maxi = sum;
            }

            // reset sum if it goes negative
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 3, 5, -2, 7, -4};
    int result = sol.maxSubArray(nums);

    cout << "Maximum Subarray Sum = " << result << endl;

    return 0;
}
