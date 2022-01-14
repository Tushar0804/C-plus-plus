#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << '\n';
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << '\n';
}

int main()
{
    int arr[] = {50, 60, 70, -5, 0, -9, 10, 6, 0};								// creating an array
    
    int n = sizeof(arr) / sizeof(arr[0]);									// Converting an array into a vector
    vector<int> vec(arr, arr + n);
    
    cout << "Elements in Array: ";
    printArray(arr,n);    
    cout<<"\nElements in Vector: ";
    printVector(vec);
    
        
    sort(vec.begin(), vec.end());											// Sorting a vector    
    cout << "\nPrinting vector after Sorting: ";
    printVector(vec);
    
        
    reverse(vec.begin(), vec.end());										// Reversing a vector    
    cout << "\nPrinting vector after Reversing : ";    
    printVector(vec);
    
    cout << "\nMaximum element is: " << *(max_element(vec.begin(), vec.end()));					// Printing max element of vector
    cout << "\nMinimum element is: " << *(min_element(vec.begin(), vec.end())) << endl;;		// Printing min element of vector
    
    
    cout << "\nOccurrence of 0 in vector: " << count(vec.begin(), vec.end(), 0) << endl;		// counting occurrence of an element
     
    
    return 0;
}
