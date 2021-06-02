Class Solution
{
    public:
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++){
           int min=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[min]){
                   min = j;
               }
           }
       swap(&arr[i],&arr[min]);
       }
       
    }
};

// Another Solution

int select(int arr[], int i)
{
    int max = arr[0], ind = 0;
    int j;
    for ( j=1; j<=i; j++)
    {
        if (arr[j] > max)
        {
           ind = j;
           max = arr[j];
        }
    }
    return ind;
}


void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
