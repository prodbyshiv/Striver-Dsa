#include <iostream>
using namespace std;



void leftRoatate(int n, int arr[]){
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];

    }
    arr[n-1] = temp;
}


int main(){
    int n;
    cout<<" enter the size of an array :"<<endl;
    cin>>n;


    int arr[n];
    cout<<"enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    leftRoatate(n,arr);

    cout<< " Array after left rotation :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}