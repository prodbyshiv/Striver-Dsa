#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int> arr, int N) {
   int sum = N*(N+1)/2; // 1+2+...+N
   int sum1 = 0;
   for (int i = 0; i < arr.size(); i++) {
       sum1 += arr[i];
   }
   return sum - sum1;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,8}; // example of
    int N = 8; // total numbers should be 1..8
    cout << "Missing number is: " << findMissing(arr, N);
    return 0;
}
