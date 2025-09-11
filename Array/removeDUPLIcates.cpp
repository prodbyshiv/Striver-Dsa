#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &arr, int n) {
    if (n == 0) return 0;

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> arr = {1, 2, 2, 3};
    int newSize = removeDuplicate(arr, arr.size());
    cout << "New size: " << newSize << endl;
    cout << "Array: ";
    for (int k = 0; k < newSize; k++)
        cout << arr[k] << " ";
}
