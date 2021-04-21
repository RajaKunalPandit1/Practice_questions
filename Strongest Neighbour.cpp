void maximumAdjacent(int n, int arr[]){
    
    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            cout<< arr[i] << " ";
        }else if(arr[i]==arr[i-1]){
            cout<< arr[i] << " ";
        }else
         cout<< arr[i-1] << " ";
    } 
    
     
}
