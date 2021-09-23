#include <iostream>
using namespace std;

int isPrime(int N)
{
	if(N <= 1)
		return 0;
	
	if(N != 2 && N % 2 == 0)
		return 0;
	
	if(N != 3 && N % 3 == 0)
		return 0;
	
	for(int i = 5; i*i <= N; i+= 6)
	{
		if(N % i == 0 || N % (i+2) == 0)
			return 0;
	}
	
	return 1;
}

int main()
{
	int num;
	cout << "Enter a Number : ";
	cin >> num;
	
	if(isPrime(num))
		cout << num << " is a Prime Number\n\n";
	else
		cout << num << " is not a Prime Number\n\n";
	
	return 0;
}
