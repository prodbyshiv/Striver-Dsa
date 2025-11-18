///// negative, zero, pos

// C++ program for the above approach
#include <iostream>
#include <vector>
using namespace std;

//  void rearrangeArray( vector<int>array){
//     int left = 0; int mid = 0; int right = array.size()-1;

//     while (mid <= right)
//     {
//         if (array[mid] < 0)
//         {
//             swap(array[mid],array[left]);
//             left++;
//             mid++;
//         }
//         else if (array[mid] == 0)
//         {
//             mid++;
//         }
//         else
//         {
//              swap(array[mid], array[right]);
//              right--;
//         }
        
//     }
    
//  }

// Driver Code

void arrangeElements(vector<int>&array)
{
   int low = 0; int high = array.size()-1; int mid = 0;
    

    while (mid <= high)
    {
        if (array[mid] < 0)
        {
            swap(array[low],array[mid]);
            low++;
            mid++;
        }

        else if (array[mid]==0)
        {
            mid++;
        }
        else // array[mid] > 0
        {
            swap(array[mid],array[high]);
            high--;
            
        }
        
        
    }
    

}

int main()
{
    
    vector<int>array = { 1, 0, -2, 3, 4, -5,-7, 9, -3 };
     arrangeElements(array);
     for (int x: array) cout<< x << " ";
     
     

   
}