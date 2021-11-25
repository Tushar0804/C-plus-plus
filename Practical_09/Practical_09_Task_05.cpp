#include <bits/stdc++.h>
using namespace std;

class college 
{
    string name; 
    int roll_no;
};

struct student
{
 	string name;
 	int roll_no;
};

int main()
{
 	college t;
 	student s1;
 	
	t.name = "roger";// compiler error because x is private
  	t.roll_no = 10; //error concept of data hiding
  	
  	s1.name = "shaun";
  	s1.roll_no = 89;
  	
  	getchar();
  	return 0;
}
