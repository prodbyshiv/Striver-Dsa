#include <iostream>
#include <vector>
using namespace std;

vector<int> removeZeros(vector<int> a ,int n) {
    vector<int> temp;

    // Step 1: collect non-zero elements
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp.push_back(a[i]);
        }
    }

    // Step 2: put back non-zero elements in original array
    int nz = temp.size();
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    // Step 3: fill remaining positions with zeros
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }

    return a;
}

int main() {
    int n;
    cout << "enter the size of an array: ";
    cin >> n;

    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = removeZeros(arr, n);

    cout << "array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
