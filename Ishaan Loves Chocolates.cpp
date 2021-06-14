int chocolates(int arr[], int n)
{
    
    int res=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<res){
            res = arr[i];
        }
    }return res;
    
}

// Alternative Approach

int chocolates(int arr[], int n)
{
    int i = 0;
    int j = n-1;
    
    while(i < j and n > 1){
        if(arr[i]> arr[j])
            i++;
        else
            j--;
        n--;
    }
    return arr[i];
    
}
