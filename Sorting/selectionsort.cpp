#include <iostream>
using namespace std;



// 2 loop banta hai ek smallest element select karne ke liye, n-2 tak kar liye 
//uske bad us selected smallest number ko compare karna hai till the last element 
// after comparing agar koi shota number mil jaye then swap arr[mini] jo abhi smallest mila hai uska value to the value jo pehle shota tha arr[i]

void selectionSort(int arr[], int n) {
    //ye loop lagaye check karne ke liye ki sabse smallest element
    for (int i = 0; i <= n-1; i++)
    {
        int mini = i;

        for (int  j=i+1 ; j <= n-1; j++)
        {
            if (arr[j]< arr[mini])
            {
               mini = j;
            }
            swap(arr[i],arr[mini]);
        }
        
    }
    

    
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
