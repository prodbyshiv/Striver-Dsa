#include <iostream>
using namespace std;

 int floorSqrt(int n){
    int low = 1, high = n;
    int ans = 0;

    while (low <= high)
    {
        int mid  =(low+high)/2;
        long long sqr = mid*mid;

        if (sqr==n)
        {
           ans = mid;
           return ans;
        }
        else if (sqr > n)
        {
            high = mid-1;
        }

        else{
            ans = mid;
            low =mid+1;
        }
        
        
    }
    return -1;
 }

int main() {
    int n = 144;
    cout<<floorSqrt(n)<<endl;
    
}
