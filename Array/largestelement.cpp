#include <iostream>
using namespace std;

int largestElement(int arr[], int n) {
    int largest = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest; 
}

int main() {
    int arr[] = {11, 11, 11, 34, 45};  
    int n = 5; 
    int land = largestElement(arr, n); 
    cout << land << endl; 
}
