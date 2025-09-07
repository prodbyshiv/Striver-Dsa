#include <iostream>
#include <vector>
#include <algorithm> // for swap
using namespace std;
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];   // choose pivot
    int i = low, j = high;

    while (i < j) {
        // move i to the right until element > pivot
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        // move j to the left until element < pivot
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]); // swap if needed
    }
    swap(arr[low], arr[j]); // place pivot at correct position
    return j; // return pivot index
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);  // left part
        quickSort(arr, pIndex + 1, high); // right part
    }
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
