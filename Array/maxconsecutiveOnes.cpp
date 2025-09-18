#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 1, 0, 1}; // example input
    int n = arr.size();

    int counter = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            counter++;
            if (counter > maxi) {
                maxi = counter;
            }
        } else {
            counter = 0; // reset if zero comes
        }
    }

    cout << "Maximum consecutive ones = " << maxi << endl;

    return 0;
}
