#include <iostream>
using namespace std;

bool isSorted(int n, vector<int> a){
     
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] < a[i+1]) 
        {
             
        }
        else{ return false;}
        
    }
    return true;
}

int main() {
    int name = isSorted(3,{2,0,6});
    cout<<name<<endl;
    
}  