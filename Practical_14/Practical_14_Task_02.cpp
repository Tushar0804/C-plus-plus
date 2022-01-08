#include <iostream>
#include <string>
using namespace std;

class base
{
	public:
		base()
		{
		    cout << "Base Constructor Called" << endl;
		}
		~base()
		{
		    cout << "Base Destructor Called" << endl;
		}
};
class child : public base
{
	public:
		child()
		{
		    cout << "Child Constructor Called" << endl;
		}
		~child()
		{
		    cout << "Child Destructor Called" << endl;
		}
};
int main()
{
    base *p;
    child c;
    p = &c;
    p->~base(); 
//    p->~child();     // error: the type being destroyed is ‘base’, but the destructor refers to ‘child’    
}
