#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n  = nums.size();
        vector<int> res;
        int max_from_back = nums[n-1];

        res.push_back(max_from_back); // rightmost element is always leader

        for (int i = n-2; i >= 0; i--) {
            if (nums[i] > max_from_back) {
                max_from_back = nums[i];
                res.push_back(max_from_back);
            }
        }

        reverse(res.begin(), res.end()); // maintain left-to-right order
        return res;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {16, 17, 4, 3, 5, 2};

    vector<int> ans = sol.leaders(nums);

    cout << "Leaders in the array: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
