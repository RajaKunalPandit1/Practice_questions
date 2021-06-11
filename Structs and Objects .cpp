int area(Rectangle r)
{
   return r.length*r.breadth;
}


void maxArea(Rectangle arr[],int n)
{
   
   int res = 0;
  
  for(int i=0;i<n;i++){
       res = max(res,area(arr[i]));
  }
  cout<< res;
    cout<<endl;
}
