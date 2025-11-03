#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int>piles = {3,6,7,11};
   int h = 8;
   int low = 1;
   int high = 11;
   int ans = high;  

   while (low <= high)
   {
        int totalHours = 0; // current kitna der me kha rhi hai?
        int mid = (low+high)/2; 



        for (int i = 0; i < piles.size(); i++)
        {
            totalHours += ceil((double)piles[i] / mid); 
        }
        
        if (totalHours <= h)
        {
            ans = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
        
        
   }
   

    cout << "Minimum speed needed: " << ans << endl;
}
