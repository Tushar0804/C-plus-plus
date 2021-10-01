#include<iostream>
using namespace std;
namespace first
{
	int add(int a, int b)
	{
		return (a+b);
	}
}
namespace second
{
	float add(float a, float b)
	{
		return (a+b);
	}
}

using namespace first;
using namespace second;

int main()
{
	cout << "Sum = " << add(2, 3) << endl;
	cout << "Sum = " << add(2.2f, 3) << endl;			// Error Ambiguity
	cout << "Sum = " << add(0, 10.5f)<< endl;			// Error Ambiguity
	cout << "Sum = " << add(5.5f, 4.1f)<< endl;
	return 0;
}
