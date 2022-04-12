#include<iostream>
using namespace std;
void isPalRec(char st[]){
    int e  = strlen(st)-1;
    if(e == 0){
        cout<<"string palindrome";
        return;
    }
    if(st[0] != st[e]){
        cout<<"not palindrome";
        return;
    }
    st[e] = '\0';
    return isPalRec(st+1);
}

int main(){
    char st[50];
    cin>>st;
    isPalRec(st);
}