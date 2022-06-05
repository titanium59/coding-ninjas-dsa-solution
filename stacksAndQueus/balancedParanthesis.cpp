bool isBalanced(string arr){
    stack<char> s;
    for (int i = 0 ; arr[i] != '\0' ; i++){
        if( arr[i] == '(' ){
            s.push(arr[i]);
        }
        if(arr[i] == ')'){
            if(s.size() == 0){
                return false;
            }
            else{
            s.pop();
            }
        }
        
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}