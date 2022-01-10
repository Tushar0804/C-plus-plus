#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file;
	file.open("example.txt");			// opening file in read mode
	
	if(!file)
	{
		cout << "cannot open file" << endl;
		return 0;
	}
	
	string data;
	cout << "Reading data from example.txt file....\n" << endl;
	while(!file.eof())
	{
		getline(file, data);		
		cout << data << endl;
	}
	file.close();
	
	return 0;
}
