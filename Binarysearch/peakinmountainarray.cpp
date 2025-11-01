#include <iostream>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int high = arr.size()-1; 
        int low = 0;

        while (low < high){
            int mid = low+ (high-low)/2;

            if(arr[mid] < arr[mid+1]){
                low = mid+1;
            }
            else {
                high = mid;
            }
        }
        return low;
    }

int main() {
    vector<int>arr = {0,1,0};
    int ans = peakIndexInMountainArray(arr);
    cout<<ans<<endl;
    return 0;
}