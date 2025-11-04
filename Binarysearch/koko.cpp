// koko eating bananas

#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> &piles){
    int maxi = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        maxi = max(maxi,piles[i]);
    }
    return maxi;
}

 int inttotalHours(vector<int> &piles,int h){
    int totalH = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        totalH += ceil((double)piles[i]/(double)h);
    }
    return totalH;
    
}

int minimumSpeed(vector<int> &piles, int h){
    
int low = 1; int high = findMax(piles);
int mid = (low+high)/2;
int totalH = inttotalHours(piles,mid);

if (totalH <= h)
{
    high = mid-1;
}
else{
    low = mid+1;
}
return low;
}

int main() {
vector<int> piles = {3,6,7,11};
 int h=8;

    
    
}