#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter the order of the matrix : ";
	cin >> N;
	
	int arr[N][N];
	cout << "Enter the elements : " << endl;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
			cin >> arr[i][j];
	}
	
	int res = N % 2 == 0 ? N/2 - 1: N/2;    
    for(int i = 0; i <= res; i++)
    {
        for(int j = 0; j < N; j++)
        {    
            if (i == N-1-i && j == N-1-j)
                break;
            int t = arr[i][j];
            arr[i][j] = arr[N-1-i][N-1-j];
            arr[N-1-i][N-1-j] = t;
        }
    }
	
	cout << "\nArray after reverse : " << endl;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}       
	return 0;
}
