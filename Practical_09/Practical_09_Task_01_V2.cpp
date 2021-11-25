#include<bits/stdc++.h>
using namespace std;

class Student
{  	//friend function array 
	
	private:
		string name;
		int marks;
		char sec;
	
	public:	
		void set_values(string name, int m, char sec)
		{
			this->name = name;
			this->marks = m;
			this->sec = sec;
		}
	
	friend int get_marks(Student obj);
};

int get_marks(Student obj)
{
	return obj.marks;
}

int main()
{
	int n;
	cout << "Enter no. of students" << endl;
	cin >> n;
	Student arr[n];
	
  	for(int i = 0; i < n; i++)
   	{
   		cout << "Enter Name, Marks, and Section of Student " << i+1 << endl;
   		int temp;
   		string name;
   		char sec;
   		
   		cin >> name;
   		cin >> temp;
   		cin >> sec;
   		arr[i].set_values(name, temp, sec);
   	}
   	
	int sum = 0;
	for(int i = 0; i < n; i++)
  	{
		sum += get_marks(arr[i]);
  	}
  	
 	cout << "\nTotal marks of student in college is : " << sum << endl;
}
