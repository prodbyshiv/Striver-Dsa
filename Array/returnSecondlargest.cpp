#include <iostream>
#include <vector>
#include <climits> // for INT_MIN, INT_MAX
using namespace std;

// Function to find second largest element
int secondLargest(vector<int>& a, int n) {
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }
    return second;
}

// Function to find second smallest element
int secondSmallest(vector<int>& a, int n) {
    int smallest = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < smallest) {
            second = smallest;
            smallest = a[i];
        } else if (a[i] < second && a[i] != smallest) {
            second = a[i];
        }
    }
    return second;
}

// Function to get both second largest and second smallest
vector<int> getSecondorderElements(vector<int> a, int n) {
    int secondlargest = secondLargest(a, n);
    int secondsmallest = secondSmallest(a, n);

    return {secondlargest, secondsmallest};
}

int main() {
    vector<int> arr = {5, 10, 2, 8, 7};
    int n = arr.size();

    vector<int> ans = getSecondorderElements(arr, n);

    cout << "Second Largest = " << ans[0] << endl;
    cout << "Second Smallest = " << ans[1] << endl;

    return 0;
}
