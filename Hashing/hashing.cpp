#include <iostream>
using namespace std;




int main(){
    int n; // size of an array
    cout<<" enter the size of an array"<<endl;
    cin>>n;// size of an array given by the user.

    // now enter the array elements
    // so define an array 1st
    int arr[n];
    cout<<"enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int target, count = 0;
    cout<<" enter the number you want to check: ";
    cin>>target;

    for (int i = 0; i < n; i++)
    {
        if (target==arr[i])
        {
            count++;
        }
        
    }
    if (count>0)
    {
        cout<<target<<" apears "<<count<<" times.";
    }
    else{
        cout<<target<<"does not appears in the array ";
    }
    
    
    


    
}