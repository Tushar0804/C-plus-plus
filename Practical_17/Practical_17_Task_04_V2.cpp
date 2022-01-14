#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << '\n';
}

int main()
{
    int arr[] = {4, 5, 6, -9, -8, 0, 8, 15, 7};								// creating an array
    
    int n = sizeof(arr) / sizeof(arr[0]);									// getting size of array    
    
    cout << "Elements in Array: ";
    printArray(arr,n);    
    
    sort(arr, arr + n);														// Sorting an array
    cout<<"\nElements in Array after Sorting: ";
    printArray(arr,n); 
    
    
    cout << "\nUsing Binary Search for finding 8 in the Array:" << endl;	// Binary Search in an array    
    if (binary_search(arr, arr + n, 8))
    {
        cout << "8 exist in the array" << endl;
    }
    else
    {
        cout << "8 does not exist in the array" << endl;
    }  
    
    return 0;
}
