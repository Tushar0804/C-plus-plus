#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void printvector(vector<int> v)							// Function for printing the elements in a vector
{
    vector<int>::iterator it;
    cout << "\nElements in vector are: ";
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}

int main()
{
	vector<int> v;
	
    int num, choice;
    do
    {
    	cout << "Enter a number: ";
        cin >> num;
        
        v.push_back(num);								// Inserting elements in vector
        
        cout << "Press 1 to Continue OR 0 to Exit: ";
        cin >> choice;
    }while(choice);
    
    printvector(v);
    
    int size = v.size();
    cout << "\nSize of the vector is : " << size << endl;
    cout << "Capacity of vector is : " << v.capacity() << endl;
    
    v.resize(2 * size, 0);									// Resizing the vector v
    cout << "\nVector after resizing and intialising to 0";
    printvector(v);
    
    cout << "\nChecking vector is empty or not" << endl;
    if (v.empty())
        cout << "Vector is empty." << endl;
    else
        cout << "Vector is not empty." << endl;  
    
    return 0;
}
