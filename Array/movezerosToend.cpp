#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(int n, vector<int>& a) {
        int j = -1;

        // find first zero
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                j = i;
                break;
            }
        }

        // no zero found
        if (j == -1) return;

        // shift non-zeros forward
        for (int i = j + 1; i < n; i++) {
            if (a[i] != 0) {
                swap(a[i], a[j]);
                j++;
            }
        }
    }
};

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    int n = arr.size();

    Solution s;
    s.moveZeroes(n, arr);

    for (int x : arr) cout << x << " ";
    return 0;
}
