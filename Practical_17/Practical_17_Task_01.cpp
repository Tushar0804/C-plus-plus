#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> ls)				// Function for printing the elements in a list
{
    list<int>::iterator it;
    cout << "\nList is: ";
    for (it = ls.begin(); it != ls.end(); it++)
    {
    	cout << *it << " ";
	}
    cout << '\n';
}
int main()
{
    list<int> ls;
    
    int num, choice;
    do
    {
    	cout << "Enter a number: ";
        cin >> num;
        
        ls.push_back(num);
        
        cout << "Press 1 to Continue OR 0 to Exit: ";
        cin >> choice;
    }while(choice);
    
    printList(ls);
    
    cout << "\nSize of the list is: " << ls.size() << endl;		// Finding list size
    
    ls.sort();													// sorting the list ls
    cout << "\nList is Sorted.";
    printList(ls);
    
    ls.reverse();												// reversing the list ls    
    cout << "\nList is Reversed";    
    printList(ls);    
    
    return 0;
}
