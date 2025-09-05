#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    map<char,int> mpp; // frequency map

    // Count frequencies
    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        char c;
        cout << "Enter character to search: ";
        cin >> c;
        cout << c << " appears " << mpp[c] << " times." << endl;
    }

    return 0;
}
