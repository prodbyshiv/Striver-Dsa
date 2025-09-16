#include <iostream>
#include <vector>
using namespace std;

vector<int> intersectionOptimal(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> ans;

    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            ans.push_back(a[i]);
            i++; j++;
        } 
        else if (a[i] < b[j]) {
            i++;
        } 
        else {
            j++;
        }
    }
    return ans;
}

int main() {
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {3,4,5,6,7};

    vector<int> res = intersectionOptimal(a, b);
    for (int x : res) cout << x << " ";
}
