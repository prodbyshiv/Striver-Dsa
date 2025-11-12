#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort
using namespace std;


class Solution {
  public:
  
  bool canWeplace(vector<int> &stalls, int distance, int cows){
    int lastCowPosition = stalls[0];
    int cowCount = 1;
    for(int i = 1; i < stalls.size(); i++){ // Start from the second stall
        if(stalls[i] - lastCowPosition >= distance){
            cowCount++;
            lastCowPosition = stalls[i];
        }
        if(cowCount == cows){ // If we have placed all required cows, we can stop early
            return true;
        }
    }
    return cowCount >= cows;
  }

    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();

        // The minimum possible distance is 1 (if k > 1)
        // The maximum possible distance is the difference between the last and first stall
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        int ans = 0; // To store the maximum possible distance

        while(low <= high){
            int mid = (low+high)/2;

            if(canWeplace(stalls, mid, k)){
                ans = mid; // mid is a possible answer, try for a larger distance
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};

int main() {
    // Example usage:
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    Solution sol;
    int result = sol.aggressiveCows(stalls, k);
    cout << "Maximum minimum distance: " << result << endl; // Expected output: 3 (cows at 1, 4, 8 or 1, 4, 9)

    stalls = {10, 1, 2, 7, 5};
    k = 3;
    result = sol.aggressiveCows(stalls, k);
    cout << "Maximum minimum distance: " << result << endl; // Expected output: 4 (cows at 1, 5, 10)
    
    return 0;
}