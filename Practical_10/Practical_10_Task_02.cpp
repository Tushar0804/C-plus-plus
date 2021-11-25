#include<bits/stdc++.h> 
using namespace std;

class student
{
	private:
		string name;
		string add;
		int roll_no;
		char sec;
	public:
	void set_values()
	{	
		cout << "\nEnter Name : ";
		getline(cin, name);
		
		cout << "Enter Address : ";
		getline(cin, add);
		
		cout << "Enter Roll Number : ";
		cin >> roll_no;
		
		cout << "Enter Section : ";
		cin >> sec;
	}
	void show_data()
	{
		cout << "\nName : " << name << endl;
		cout << "Address : " << add << endl;
		cout << "Roll Number : " << roll_no << endl;
		cout << "Section : " << sec << endl;
	}
};

int main()
{
	student *ptr;
	student obj1;
	
	ptr = &obj1;
	ptr->set_values();
	ptr->show_data();
	
	return 0;
}
