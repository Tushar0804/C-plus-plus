#include<iomanip>
#include <iostream>
using namespace std;

int main()
{
	float num = 45.5608;
	cout << "This is: " << fixed << setprecision(2) << num << endl;		// setprecision
	
	int i = 18;
	
	cout << "i = " << setw(10) << i << endl;;							// setw
	
	return 0;
}

