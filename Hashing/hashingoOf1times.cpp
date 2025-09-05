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
    

    //pre-compute
    int hash[13]={0}; //13 size ka array define ho gaya hai yaha;
    for (int i = 0; i < n; i++)
    {
       hash[arr[i]]+=1; // open copy usme hai.
    }


    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    
return 0;
    
}