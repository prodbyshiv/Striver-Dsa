#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);   // allocate result array
        int pos = 0, neg = 1; // pointers for even/odd indices

        for (int x : nums) {
            if (x > 0) {
                res[pos] = x;
                pos += 2;
            } else {
                res[neg] = x;
                neg += 2;
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    Solution sol;
    vector<int> ans = sol.rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
