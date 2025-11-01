#include <iostream>
using namespace std;


int findMin(vector<int>& nums){
    int low = 0; int high = nums.size()-1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low+high)/2; 

        if (nums[low] <= nums[high])
        {
            ans = min(ans,nums[low]);
        }
        

        // find the sorted part
        if (nums[low] <= nums[mid])
        {
            //ab tak jo ans me chhoti value mili hai,
            // usko compare karo nums[low] se,
            // aur dono me se jo chhoti hai, use ans me rakh lo
            ans = min(ans,nums[low]);
            low = mid+1;
        }
        else if (nums[high] >= nums[mid])
        {
           ans = min(ans,nums[mid]);
           high = mid-1;
        }   
        
    }
    return ans;
}

int main() {
    vector<int> nums = {11,13,15,17};
    
    int found = findMin(nums);

   cout<< found<<endl;
    
    return 0;
}