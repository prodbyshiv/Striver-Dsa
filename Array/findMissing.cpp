#include <iostream>
#include <vector>
using namespace std;

void findMissing(vector<int> arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        // Check gap between consecutive elements
        for (int j = arr[i] + 1; j < arr[i + 1]; j++) {
            cout << j << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 7};
    int n = arr.size();
    findMissing(arr, n);
    return 0;
}
