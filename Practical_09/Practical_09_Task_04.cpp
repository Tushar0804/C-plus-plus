#include<bits/stdc++.h>
using namespace std;

class student
{
	private:
		string name;
		int marks;
		char sec;
	public:
		student(string name, int m, char sec)
		{
			this->name = name;
			this->marks = m;
			this->sec = sec;
		}
	friend int get_marks(student);
};

int get_marks(student obj)
{
	return obj.marks;
}

int main()
{
	student obj1("Tanuj", 99, 'A');
	student obj2("Hardik", 84, 'B');
	student obj3("Anam", 78, 'C');
	
	int sum = 0;
	
	sum += get_marks(obj1);
	sum += get_marks(obj2);
	sum += get_marks(obj3);
	cout << "Total sum of all students marks : " << sum << endl;
	return 0;
}
