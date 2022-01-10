#include<iostream>
#include<iomanip>
#include<sstream>
#include<string>
using namespace std;
 
int main()
{
	int num = 100;
	
	cout << hex << num << endl;
	cout << dec << num << endl;	
	
	char  a, b, c;
	stringstream s("  123");
	s >> skipws >> a >> b >> c;
	cout << a << b << c << endl;
	
	stringstream p("  123");
	p >> noskipws >> a >> b >> c;
	cout << a << b << c << endl;
	
	return 0;
}
