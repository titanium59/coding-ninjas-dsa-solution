int stringToNumber(char arr[]){
	int k = strlen(arr);
    if(k == 0) return 0;
    int t = arr[0]-'0';
    return t*pow(10,k-1)+stringToNumber(arr+1);
}