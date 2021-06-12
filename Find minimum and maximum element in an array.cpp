
pair<long long, long long> getMinMax(long long arr[], int n) {
    
    pair<int,int>k;
    sort(arr,arr+n);
    k.first = arr[0];
    k.second=  arr[n-1];
    return k;
}

// Alternative Approach

struct pair getMinMax(long long int arr[], long long int n) {
    struct pair minmax;
    long long int i;

    if (n % 2 == 0) {
        if (arr[0] > arr[1]) {
            minmax.max = arr[0];
            minmax.min = arr[1];
        } else {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i = 2;
    }

    else {
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1;
    }

    while (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > minmax.max) minmax.max = arr[i];
            if (arr[i + 1] < minmax.min) minmax.min = arr[i + 1];
        } else {
            if (arr[i + 1] > minmax.max) minmax.max = arr[i + 1];
            if (arr[i] < minmax.min) minmax.min = arr[i];
        }
        i += 2;
    }

    return minmax;
}
