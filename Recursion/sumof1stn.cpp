#include <iostream>
using namespace std;

// Recursive function to find sum of first N numbers
int sumOfN(int n) {
    // Base case
    if (n == 0)
        return 0;

    // Recursive case
    return n + sumOfN(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of first " << n << " numbers = " << sumOfN(n) << endl;
    return 0;
}
