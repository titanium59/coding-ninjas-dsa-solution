#include <cstring>
void removeX(char arr[]) {
    
    int n = strlen(arr);
    
    
    if (n==0 ){
        return ;
    }
      int count=0;
    if (arr[0] == 'x'){
        for(int i = 0 ; i < n ; i++){
            arr[i]=arr[i+1];
             count++;
        }
         removeX(arr);
        
    }
    removeX(arr+1);
    
}