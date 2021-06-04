Class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {     
        
        int i = l,j = m+1;
int temp[r-l+1],index=-1;
while(i<=m && j<=r){
if(arr[i]>=arr[j]){
temp[++index] = arr[j];
j++;
}
if(arr[j]>=arr[i]){
temp[++index] = arr[i];
i++;
}
}
while(i<=m){
temp[++index] = arr[i];
i++;
}
while(j<=r){
temp[++index] = arr[j];
j++;
}
for(int p = r;p>=l;p--){
arr[p] = temp[index--];
}
 // Your code here
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
       


 if(r>l){
            
            int mid= (l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
            
        }
    }
    };

// Another Solution

class Solution
{
    public:

    void merge(int arr[], int l, int m, int r)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 =  r - m;
    
        /* create temp arrays */
        int L[n1], R[n2];
    
        /* Copy data to temp arrays L[] and R[] */
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1+ j];
    
        /* Merge the temp arrays back into arr[l..r]*/
        i = 0; // Initial index of first subarray
        j = 0; // Initial index of second subarray
        k = l; // Initial index of merged subarray
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
    
        /* Copy the remaining elements of L[], if there
           are any */
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
    
        /* Copy the remaining elements of R[], if there
           are any */
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            // Same as (l+r)/2, but avoids overflow for
            // large l and h
            int m = l+(r-l)/2;
    
            // Sort first and second halves
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
    
            merge(arr, l, m, r);
        }
    }
};
