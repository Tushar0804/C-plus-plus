#include <iostream>
using namespace std;

class Mammals
{
	public:
		void display1()
		{
			cout << "I am a Mammal" << endl;
		}
};

class MarineAnimals
{
	public:
		void display2()
		{
			cout << "I am a MarineAnimal" << endl;
		}
};

class BlueWhale:public Mammals, public MarineAnimals
{
	public:
		void display3()
		{
			cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
		}
};

int main()
{
	Mammals ob1;
	ob1.display1();			// Calling Mammals using its object
	
	MarineAnimals ob2;
	ob2.display2();			// Calling MarineAnimals using its object
	
	BlueWhale ob3;
	ob3.display3();			// Calling BlueWhale using its object	
	
	ob3.display1();			// Calling Mammals using BlueWhale object	
	
	ob3.display2();			// Calling MarineAnimals using BlueWhale object
		
	return 0;
}			
