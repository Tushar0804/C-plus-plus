#include<bits/stdc++.h>
using namespace std;

class Member
{
	public:
		void name()
		{
			static int a = 0;
			a++;
			cout << "Count for object is : " << a << endl;
		}
};

int main()
{	
	Member a,b,c;
	
	cout << "object 'a' ";
	a.name();
	
	cout << "object 'b' ";
	b.name();
	
	cout << "object 'c' ";
	c.name();
	
	return 0;
}
