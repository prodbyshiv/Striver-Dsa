// #include <iostream>
// using namespace std;

// int main() {
    

//     // floor = largest no in array <= x;
//     // coil = smallest no in array >= x;
//     // arr= [10, 20 30 40 50] & x=25; floor = 20 [because largest number smaller than or equal to x];
//     // ceil = 30 smallest number greater than or equal to 20;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int>& nums, int x) {
    int n = nums.size();
    int low = 0, high = n - 1;

    int floorVal = -1, ceilVal = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x) {
            floorVal = nums[mid];
            ceilVal = nums[mid];
            break;
        } 
        else if (nums[mid] < x) {
            floorVal = nums[mid];   // possible floor
            low = mid + 1;
        } 
        else { // nums[mid] > x
            ceilVal = nums[mid];   // possible ceil
            high = mid - 1;
        }
    }

    return {floorVal, ceilVal};
}

int main() {
    vector<int> nums = {1, 2, 4, 6, 10};
    int x = 5;

    pair<int, int> ans = getFloorAndCeil(nums, x);
    cout << ans.first << " " << ans.second << endl;  // Output: 4 6
}
