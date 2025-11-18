#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// problem ye hai ki Input: piles = [3,6,7,11], h = 8
// Output: 4
// kela ka piles hai 3,6,7,11 koko ka minimum speed for eating banana/hour batana hai taki wo 8 hour ke pehle sab kha le

    int maxElement(vector<int>& nums){
         int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi,nums[i]);
        
    }
    return maxi;

    }

    int totalSum(vector<int>& nums, int h){
        int totalS = 0;
        for(int i = 0; i < nums.size(); i++){
            totalS += ceil((double)nums[i]/(double) h);
        }
        return totalS;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maxElement(nums);
        int ans = 0;

        while(low <= high){
            int mid = (low+high)/2;
            int totalS = totalSum(nums,mid);

            if(totalS <= threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    return ans;
    }

    int main(){
       vector<int> nums = {1,2,5,9};
       int threshold = 6;

       cout<<smallestDivisor(nums,threshold);
    }
