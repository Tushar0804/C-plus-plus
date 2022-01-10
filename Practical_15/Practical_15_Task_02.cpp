#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream file;
	file.open("example.txt", ios::in);			// opening file in read mode
	
	if(!file)
	{
		cout << "cannot open file" << endl;
		return 0;
	}
	
	char ch;
	int ch_count = 0;
	int word_count = 0;
	int line_count = 0;
	
	cout << "Reading data from example.txt file (character by character)....\n" << endl;
	while(!file.eof())
	{
		file.get(ch);		
		cout << ch;
		
		if(ch == '\n')
		{
			word_count ++;
			line_count ++;
		}
		else if(ch == ' ')
		{
			word_count ++;
			ch_count ++;
		}
		else
		{
			ch_count ++;
		}
	}
	
	cout << "Characters: " << ch_count << endl;
	cout << "Words: " << word_count << endl;
	cout << "Lines: " << line_count << endl;
	
	file.close();	
	return 0;
}
