#include <iostream>
using namespace std;
bool isPalindrome(string s){
    int i = 0; int j = s.size()-1;
    while (j > i)
    {
        if (s[i]!=s[j]) return false;

        i++; j--;  
    }
    return true;
    
}
int main() {
     cout << (isPalindrome("madam") ? "Yes" : "No");
    
}