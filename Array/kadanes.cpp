#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums, int &bestStart, int &bestEnd) {
        int sum = 0;
        int maxi = INT_MIN;   // very small number
        int start = 0;        // start of current subarray

        for (int i = 0; i < nums.size(); i++) {
            if (sum == 0) start = i;  // new subarray start
            
            sum += nums[i];

            if (sum > maxi) {
                maxi = sum;
                bestStart = start;  // update best subarray start
                bestEnd = i;        // update best subarray end
            }

            if (sum < 0) {
                sum = 0;  // reset current sum
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 3, 5, -2, 7, -4};
    int bestStart = 0, bestEnd = 0;
    int result = sol.maxSubArray(nums, bestStart, bestEnd);

    cout << "Maximum Subarray Sum = " << result << endl;

    cout << "Subarray = [ ";
    for (int i = bestStart; i <= bestEnd; i++) {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
