#include <iostream>
using namespace std;
#include <vector>
#include <set>
//brute force solution 

// vector <int> sortedArray(vector <int> a, vector <int> b){

// int n1 = a.size();
// int n2 = b.size();
// set <int> st;

// for (int i = 0; i < n1; i++)
// {
//     st.insert(a[i]);
// }

// for (int i = 0; i < n2; i++)
// {
//     st.insert(b[i]);
// }

// vector<int> temp;
// for (auto it : st)
// {
//     temp.push_back(it);
// }

// return temp;

// }

// optimal solution 

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedarray(vector<int> a, vector<int> b) {
    int i = 0, j = 0;
    vector<int> Temp;
    int n1 = a.size();
    int n2 = b.size();

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (Temp.empty() || Temp.back() != a[i]) {
                Temp.push_back(a[i]);
            }
            i++;
        } else {
            if (Temp.empty() || Temp.back() != b[j]) {
                Temp.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (Temp.empty() || Temp.back() != a[i]) {
            Temp.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (Temp.empty() || Temp.back() != b[j]) {
            Temp.push_back(b[j]);
        }
        j++;
    }

    return Temp;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 5};
    vector<int> arr2 = {2, 3, 4, 5, 6, 7};

    vector<int> merged = mergeSortedarray(arr1, arr2);

    cout << "Merged Sorted Array (no duplicates): ";
    for (int x : merged) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
