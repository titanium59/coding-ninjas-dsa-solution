int countZeros(int n) {
    if(n<10){
        if(n==0){
            return 1;
        }
        else{
            return 0;
        }
    }

    int t;
    if(n%10 == 0) t=1;
    else t=0;
    return t += countZeros(n/10);
} 
   