#include<bits/stdc++.h>
using namespace std;

class area
{
	public:
		void output(int l, int b)
		{
			cout << "\nArea of Rectangle is : " << l*b << " meter sq" << endl;
		}
		void output(int s)
		{
			cout << "\nArea of Square is : " << s*s << " meter sq" << endl;
		}
};

int main()
{
	int choice;
	cout << "Enter 1 : To find the area of Rectangle" << endl;
	cout << "Enter 2 : To find the area of Square" << endl;
	cout << "Enter your choice : ";
	cin >> choice;
	
	area ob;
	
	switch(choice)
	{
		case 1:		int l, b;
					cout << "\nEnter the length : ";
					cin >> l;
					cout << "Enter the breadth : ";
					cin >> b;
					ob.output(l, b);
					break;
					
		case 2:		int s;
					cout << "\nEnter the side : ";
					cin >> s;
					ob.output(s);
					break;
					
		default :	cout << "\nYou entered the wrong choice" << endl;
	}
	return 0;
}
