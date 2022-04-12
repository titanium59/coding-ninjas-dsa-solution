int firstIndex(int i[], int size, int x) {
    if(size == 0) return -1;
    if(i[0] == x) return 0;
    int t =  1 + firstIndex(i+1,size-1,x);
    if(t==0)return -1;
    else return t;
}