int multiplyNumbers(int m, int n) {
    if(n == 0) return 0;
    return m+multiplyNumbers(m,n-1);
}