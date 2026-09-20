bool kLengthApart(int arr[], int n, int k) {
    int count = 0;
    int i = 0;
    while(i!=1){
        i++;
    }
    for(i = i+1;i<n;i++){
        if(arr[i] == 0){
            count++;
        }
        else if (arr[i] == 1 && count >= k) {
            count = 0;
        }
        else{
            return false;
        }
    }
    return true;
}