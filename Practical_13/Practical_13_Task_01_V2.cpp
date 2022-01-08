#include <iostream>
#include <string>
using namespace std;

class base
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        float add(float a, float b)
        {
            return (a+b);
        }
};

class child:public base
{
    public:
    	using base::add; 
        int add(int a, int b)
        {
            return(a+b+1);
        }
    
};
int main()
{
    child c;
    cout << "10 + 20 = " << c.add(10, 20) << endl;
    cout << "15.5 + 20.0 = " << c.add(15.5f, 20.0f) << endl;
    return 0;
}
// Here methods of base class int add(int , int ) only will be overshadowed.
// and float add(float, float) will work as usual

