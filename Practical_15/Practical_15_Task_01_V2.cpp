#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream file;
	file.open("sample.txt");			// opening file in write mode
	
	if(!file)
	{
		cout << "cannot open file" << endl;
		return 0;
	}
	
	string data;
	
	while(1)
	{
		cout << "Enter a String OR -1 to exit: ";
		getline(cin, data);
		
		if(data == "-1")
			break;
		
		file << data << "\n";
	}
	file.close();
	
	return 0;
}
