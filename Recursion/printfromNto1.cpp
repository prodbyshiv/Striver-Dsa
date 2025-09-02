#include <iostream>
using namespace std;

void printName(int n){
    if (1 > n)
    {
        return;
    }
    cout<< n <<endl;
    printName(n-1);
}

int main(){
    printName(7);
}