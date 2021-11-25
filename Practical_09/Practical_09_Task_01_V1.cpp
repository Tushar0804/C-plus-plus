#include<bits/stdc++.h>
using namespace std;

class Student
{
	private:	
		int roll;
		long ph_no;
		string address;
		string name;
	
	public:	
		void set_roll(int roll)
		{
			this->roll = roll;
		}		
		void set_ph(long num)
		{
			this->ph_no = num;
		}		
		void set_address(string add)
		{
			this->address = add;
		}		
		void set_name(string name)
		{
			this->name = name;
		}		
		void showdata()
		{
			  cout << "Name of Student :" << this->name << endl;
			  cout << "Roll Number of Student : " << this->roll << endl;
			  cout << "Phone Number of  Student : " << this->ph_no << endl;
			  cout << "Address of Student : " << this->address << "\n\n";
		}
};

int main()
{
	Student obj1,obj2;
	
    obj1.set_name("John");
    obj1.set_roll(29);
    obj1.set_ph(6386862383);
    obj1.set_address("xyz colony, new road");
    
    obj2.set_name("Sam");
    obj2.set_roll(34);
    obj2.set_ph(7309686238);
    obj2.set_address("ABC colony, Gehu");
    
    obj1.showdata();
    obj2.showdata();
    
    return 0;
}
