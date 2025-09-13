#include <iostream>
#include <vector>
using namespace std;

void leftRotatebyd(int n, int arr[],int d){
    // to store elements up to d
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i]=arr[i];
    }

    // now for shifting
    for (int i = d; i < n; i++)
    {
       arr[i-d] = arr[i];
    }
    
    // now putting back again the values
    for (int i = n-d; i < n; i++)
    {
        arr[i]= temp[i - (n - d)];
    }
    

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
