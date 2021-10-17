#include <iostream>
#include <ctime>
using namespace std;

int main()
{	
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	cout << "Array is : " << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}	
	
	cout << "\nArray after reverse : " << endl;
	for(int i = 2; i >= 0; i--)
	{
		for(int j = 2; j >= 0; j--)
			cout << arr[i][j] << " ";
		cout << endl;
	}	        
	return 0;
}
