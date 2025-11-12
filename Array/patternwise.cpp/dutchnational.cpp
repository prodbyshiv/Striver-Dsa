///// negative, zero, pos

// C++ program for the above approach
#include <iostream>
#include <vector>
using namespace std;

 void rearrangeArray( vector<int>array){
    int left = 0; int mid = 0; int right = array.size()-1;

    while (mid <= right)
    {
        if (array[mid] < 0)
        {
            swap(array[mid],array[left]);
            left++;
            mid++;
        }
        else if (array[mid] == 0)
        {
            mid++;
        }
        else
        {
             swap(array[mid], array[right]);
             right--;
        }
        
    }
    
 }

// Driver Code
int main()
{
    
    vector<int>array = { 1, 0, -2, 3, 4, -5,-7, 9, -3 };


   
}