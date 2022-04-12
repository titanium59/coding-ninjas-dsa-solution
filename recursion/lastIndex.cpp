int lastIndex(int a[], int s, int x) {
    if (s == 0) return -1;
    if (a[s-1] == x) return s-1;
    return lastIndex(a,s-1,x);
}
