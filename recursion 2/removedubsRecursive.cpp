#include<cstring>

void removeConsecutiveDuplicates(char *arr) {
	int k  = strlen(arr);
    if (k < 2){
        return;
    }
    else {
        if ( arr[0]==arr[1] ){
            int count = 0;
            for (int i = 1 ; i < k+1 ; i++){
                arr[i]=arr[i+1];
                count++;
            }
            removeConsecutiveDuplicates(arr);
        }
     }
	removeConsecutiveDuplicates(arr+1);
}

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}