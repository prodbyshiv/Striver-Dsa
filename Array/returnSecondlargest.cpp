#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> arr, int n) {
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }
    return second;
}

int secondSmallest(vector<int> arr, int n) {
    int smallest = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < second) {
            second = arr[i];
        }
    }
    return second;
}

vector<int> getSecondorderedelement(vector<int> arr, int n) {
    int secondlargest = secondLargest(arr, n);
    int secondsmallest = secondSmallest(arr, n);

    return {secondlargest, secondsmallest};
}

int main() {
    vector<int> arr = {12, 12, 12, 11, 10, 32};
    int n = arr.size();
    vector<int> ans = getSecondorderedelement(arr, n);

    cout << "Second largest = " << ans[0] << endl;
    cout << "Second smallest = " << ans[1] << endl;
    return 0;
}
