#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &nums, int k) {
    int left = 0, sum = 0, maxlength = 0;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right]; // window expand karo

        // agar sum bada ho gaya, window shrink karo
        while (sum > k && left <= right) {
            sum -= nums[left];
            left++;
        }
        

        // agar sum equal ho gaya, length check karo
        if (sum == k) {
            maxlength = max(maxlength, right - left + 1);
        }
    }
    return maxlength;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int ans = longestSubarray(nums, k);
    cout << "Longest Subarray Length with sum " << k << " is: " << ans << endl;

    return 0;
}
