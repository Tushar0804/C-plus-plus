#include <iostream>
#include <string>
using namespace std;

class base
{
    public:
        virtual int add(int a, int b)               // virtual function
        {
            return (a+b);
        }
        virtual int multi(int a, int b) = 0;        // pure virtual function
        // due to abstraction compiler will not bind this func at compile time and during runtime it will takes place
};

class child:public base
{
    public:
        int add(int a, int b)                       // During runtime this definition will be followed
        {
            return(a + b + 1);
        }
        int multi(int a, int b)                     // defination of base function
        {
            return(a * b);
        }
};
int main()
{
    child c;
    base *p;
    p = &c;             
    
    cout << p->multi(10, 20) << endl;
    cout << p->add(10, 20) << endl;
    
    return 0;
}
