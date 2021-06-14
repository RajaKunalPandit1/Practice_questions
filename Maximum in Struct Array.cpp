/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{   
    int res= INT_MIN;
    for(int i=0;i<n;i++){
        res = max(res,arr[i].feet*12+arr[i].inches);
    }
    return res;
}

