#include <iostream>
using namespace std;

class A
{
	public:
		int k;
};

class B: public A						// Class B inheriting A
{
	public:
		void display1()
		{
			k = 10;						// Accessing parent data member k
			cout << "k: " << k << endl;
		}
};

class C: public A						// Class C inheriting A
{
	public:
		void display2()
		{
			k = 20;						// Accessing parent data member k
			cout << "k: " << k << endl;
		}
};

class D:public B, public C				// Class D inheriting B and C
{
	public:
		void display3()
		{
			k = 30;						// Accessing parent data member k -- Error Ambiguity
			cout << "k: " << k << endl;
			
			// Diamond formed in this class
			// Hence Compiler found ambiguity for k through which class to be accessed
		}
};

int main()
{
	D ob;
	ob.display3();
	
	return 0;
}
			
