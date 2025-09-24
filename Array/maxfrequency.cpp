#include <iostream>
using namespace std;

 int maxElement(vector <int>&nums) {
   

    //OPTIMAL SOLUTION //

        int count = 0;
        int candidate = 0;

        for (int num:nums)
        {
            if (count == 0 )
            {
                candidate = num;
            }
            if (num = candidate)
            {
                count++;
            }
            else
            {
                count++;
            }
            
            
        }
        return
            candidate;
        






    ////BETTER SOLUTION////
//    unordered_map<int, int> freq;
//    int n = nums.size();

//    for (int num: nums)
//    {
//         freq[num]++;

//         if (freq[num] > n/2)
//         {
//             return num;
//         }
        
//    }
   

 }

int main() {
    
    return 0;
}