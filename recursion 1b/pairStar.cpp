#include<cstring>
void pairStar(char arr[]) {

    int k=strlen(arr);
    if(k==0){
        return;
    }
	//Recursive Call 
	
    if(arr[0]==arr[1]){
        arr[k+1]='\0';
        int l = k ;
        for(int i = 0 ; i < k-1 ; i++){
            arr[l]=arr[l-1];
        	l--;
        }
        arr[1]='*';
         pairStar(arr+2);
    }
    pairStar(arr+1);
}
