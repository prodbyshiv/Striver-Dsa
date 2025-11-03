#include <iostream>
using namespace std;

bool canMake(vector<int>& bloomDay, int m, int k, int day) {
    int bouquets = 0, flowers = 0;

    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= day) {  // bloomed
            flowers++;
            if (flowers == k) {   // enough for one bouquet
                bouquets++;
                flowers = 0;
            }
        } else {
            flowers = 0;  // break the chain (not adjacent)
        }
    }

    return bouquets >= m;
}


int minDays(vector<int>& bloomDay, int m, int k){
    long long totalNeeded = (long long)m * k;
    if (totalNeeded > bloomDay.size()) return -1; // not enough flowers

    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (canMake(bloomDay, m, k, mid)) {
            ans = mid;
            high = mid - 1; // try to make it earlier
        } else {
            low = mid + 1;  // need more days
        }
    }

    return ans;
}




int main() {
    vector<int> bloomDay = {7,7,7,7,12,7,7};
    int m = 2, k = 3;
    cout << "Output: " << minDays(bloomDay, m, k);
}