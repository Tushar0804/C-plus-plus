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
int main()
{
	cout << "Sum of integers: " << first::add(10, 20) << endl;
	cout << "Sum of float: " << second::add(10.8, 3) << endl;
	
	return 0;
}
