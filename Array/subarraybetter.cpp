#include <iostream>
#include <vector>
using namespace std;
// better SOLUTION
int longestSubarray(vector<int> &nums, int k){
    int sum = 0; int maxlength =0;
    unordered_map<int, int> mpp;
   
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum==k)
        {
            maxlength = max(maxlength,i+1);
        }

        if(mpp.count(sum-k)) {
            
            maxlength = max(maxlength, i - mpp[sum-k]);

        }
        
        if (!mpp.count(sum))
        {
            mpp[sum]=i; // sum ka index to yha store ho rha hai and sum.
        }
        
    }

    
    
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int ans = longestSubarray(nums, k);
    cout << "Longest Subarray Length with sum " << k << " is: " << ans << endl;

    return 0;
}
