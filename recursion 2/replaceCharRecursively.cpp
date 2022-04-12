#include<cstring>
void replaceCharacter(char a[], char c1 , char c2){
    int n = strlen(a);
    if (n == 0){
        return;
    }
    else {
        replaceCharacter(a+1,c1,c2);
        if (a[0]==c1){
            a[0]=c2;
        }
    }

}
#include <iostream>
using namespace std;
#include "Solution.h"

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
