#include <iostream>
#include <string>
using namespace std;

void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
void printPermutations(string input){

    permute(input,0,input.size()-1);
}
#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}