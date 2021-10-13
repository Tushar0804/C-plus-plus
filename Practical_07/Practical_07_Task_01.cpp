#include <iostream>
using namespace std;

int main()
{
	int choice;
    cout << "1.   To print current year." << endl;
    cout << "2.   To print current month." << endl;
    cout << "3.   To print current day." << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    
    switch(choice)
    {
    	case 1: cout << "Current year is 2021." << endl;
    			break;
    	
    	case 2: cout << "Current month is October." << endl;
    			break;
		
		case 3:	cout << "Current day is Wednesday." << endl;
				break;
		
		default: cout << "Invalid Input !!!" << endl;
	}         
	return 0;
}
