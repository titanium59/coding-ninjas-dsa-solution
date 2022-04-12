int sum(int a[], int n) {
	if(n==0) return 0;
	int x = a[0]+sum(a+1,n-1);	
	return x;
}
