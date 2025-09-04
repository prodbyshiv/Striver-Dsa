#include <iostream>
using namespace std;

// Recursive function to find sum of first N numbers
int factorialNterms(int n) {
    // Base case
    if (n == 0)
        return 1;

    // Recursive case
    return n * factorialNterms(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "product of first " << n << " numbers = " << factorialNterms(n) << endl;
    return 0;
}
