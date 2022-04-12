bool checkNumber(int a[], int size, int x) {
	if(a[0] == x) return true;
	if(size == 0) return false;
    return checkNumber(a+1,size-1,x);
}