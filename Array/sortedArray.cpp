#include <iostream>
using namespace std;

int isSorted(int n, vector<int> a){
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i-1]) 
        {
            
        }
        else
        {
            return false;
        }
        
    }
    return true;
}

int main() {
    int name = isSorted(3,{2,4,3});
    cout<<name<<endl;
    
}  