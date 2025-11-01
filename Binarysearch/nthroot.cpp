#include <iostream>
#include <cmath>
using namespace std;

int NthRoot(int n, int m) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = (low + high) / 2;
        double val = pow(mid, n);

        if (val == m)
            return mid;
        else if (val > m)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << NthRoot(n, m) << endl;
    cout << NthRoot(3, 27) << endl; // just for testing
    return 0;
}
