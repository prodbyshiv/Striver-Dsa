#include <iostream>
# include <vector>
using namespace std;

int main() {
    
     vector<int>piles = {3,6,7,11};
     int h = 6; 
int ans = 0;
     int low = 1; 
     int high = *max_element(piles.begin(),piles.end());

     while (low <= high)
     {
        int mid = (low+high)/2;
        int totalHours = 0; 

        for (int i = 0; i < piles.size(); i++)
        {
            totalHours += ceil((double) piles[i]/mid);
        }
        
        if (totalHours <= h)
        {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
     }
     cout<<"Output :"<<ans; 
}