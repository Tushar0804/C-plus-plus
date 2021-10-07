#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    float c = 50.5f, d = 40.6f;
    string e = "Hello";
    string f = "World";
    
    cout << "int + int = " << a + b << endl;
	
    cout << "float + float = " << c +  d << endl;
	
    cout << "int + float = " << a + c << endl;
    
    cout << "string + string = " << e + f << endl;
    
    cout << "string + int = " << e + a << endl;     // ERROR!
    
    return 0;
}
