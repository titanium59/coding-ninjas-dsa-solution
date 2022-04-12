bool solve(char input[]) {
    if(input[0]=='\0')
        return true; // Write your code here
    bool so;
    if(input[0]=='a'&&(input[1]=='\0'||input[1]=='a'))
        so=solve(input+1);
    else if(input[0]=='a'&&(input[1]=='b'&&input[2]=='b'))
        so=solve(input+1);
    else if(input[0]=='b'&&input[1]=='b'&&(input[2]=='\0'||input[2]=='a'))
        so= solve(input+2);
    else
        return false;
    return so;
}


bool checkAB(char input[]) {
    if(input[0]=='\0')
        return true; 
    else if (input[0] != 'a')
        return false;
    return solve(input);
}
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
