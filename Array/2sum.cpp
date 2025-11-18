 #include <iostream>
 #include <vector>
 using namespace std;


 vector<int> twoSum(vector<int>array, int target){
    unordered_map<int,int>mp;
    for (int i = 0; i < array.size(); i++)
    {
       int complement  = target-array[i];

       if (mp.count(complement))
       {
         return {mp[complement],i};
       }
       mp[array[i]] = i;
    }
    return {};
 }
 
 int main() {
     vector<int>array = {2,4,11,15};
     int target = 15;
     cout<<twoSum(array,target);
 }