#include <iostream>
#include <vector>
using namespace std;

void leftRotatebyd(int n, int arr[],int d){
    
    reverse(arr,arr+d); //O(d)
    reverse(arr+d,arr+n);// O(n-d)
    reverse(arr,arr+n);// o(n)
  //  total t(c) = o(2n);
  // but total s(c)=O(1); becauseno extra variables are used.

}

int main(){
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

    leftRotatebyd(n,arr,d);

    cout<<" the shifted arrays are :"<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }

}
