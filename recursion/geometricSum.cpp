double geometricSum(int k) {
    if(k<0) return 0;
    double t = 1/pow(2,k);
    
    return t+geometricSum(k-1);

}