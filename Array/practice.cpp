#include <iostream>
#include <vector>
using namespace std;

// int longestSubarray(vector<int> &nums, int k) {
//     int maxlength = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         int sum = 0;   // ✅ yaha reset
//         for (int j = i; j < nums.size(); j++) {

//             sum = sum + nums[j];

//             if (sum == k) {
//                 maxlength = max(maxlength, j - i + 1);
//             }
//         }
//     }
//     return maxlength;
// }

// int main() {
//     int n, k;
//     cout << "Enter size of array: ";
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     cout << "Enter value of k: ";
//     cin >> k;

//     int ans = longestSubarray(nums, k);
//     cout << "Longest Subarray Length with sum " << k << " is: " << ans << endl;

//     return 0;
// }

int main() {

}