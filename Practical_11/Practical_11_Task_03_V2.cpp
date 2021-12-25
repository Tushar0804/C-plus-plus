#include <iostream>
using namespace std;

class A
{
	public:
		int k;
};

class B: virtual public A						// Class B inheriting A virtually
{
	public:
		void display1()
		{
			k = 10;						
			cout << "k: " << k << endl;
		}
};

class C: virtual public A						// Class C inheriting A virtually
{
	public:
		void display2()
		{
			k = 20;
			cout << "k: " << k << endl;
		}
};

class D:public B, public C						// Class D inheriting B and C
{
	public:
		void display3()
		{
			k = 30;						
			cout << "k: " << k << endl;
		}
};

int main()
{
	B ob1;
	ob1.display1();
	
	C ob2;
	ob2.display2();
	
	D ob3;
	ob3.display3();
	
	return 0;
}			
