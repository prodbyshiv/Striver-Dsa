#include <iostream>
using namespace std;

void rightRotatebyd(int n, int arr[], int d) {
    
    reverse(arr,arr+n);
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
}


int main() {
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<" enter how many elements to rotate: ";
    int d;
    cin>>d;

    rightRotatebyd(n,arr,d);

    cout<<" the shifted arrays are :"<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }

    return 0;
}