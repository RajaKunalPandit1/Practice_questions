int num(int arr[], int n, int k)
{
    int count=0;
for(int i=0;i<=n-1;i++)
{
int num=arr[i];
   for(;num!=0;){
       if(num%10==k)
           count++;
           num/=10;
       }
    }
return count;
}
