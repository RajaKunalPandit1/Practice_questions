template <class T>
void sortArray(T a[], int n)
{ 
	//Add your code here.
	sort(a,a+n);
}

template <class T>
void printArray(T a[], int n)
{
for(int i=0;i<n;i++){
    cout<< a[i] << " ";
}
cout<< endl;
}

// Alternative Solution

template <class T>
void sortArray(T a[], int n)
{ 
	bool b = true;
	while (b) {
		b = false;
		for (size_t i=0; i<n-1; i++) 
		{
			if (a[i] > a[i + 1]) 
			{
				T temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				b = true;
			}
		}
	}
}

template <class T>
void printArray(T a[], int n)
{
	for (size_t i = 0; i < n; ++i) 
		cout << a[i] << " "; 
	cout << endl;
}
