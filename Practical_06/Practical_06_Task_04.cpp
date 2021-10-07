#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter First String : ";
    getline(cin, s1);
    cout << "Enter Second String : ";
    getline(cin, s2);
    
    int len1 = s1.length();
    int len2 = s2.length();
        
    if( len1 != len2)
    	cout << "Strings are not Equal" << endl;
    else
    {
    	for(int i = 0; i < len1; i++)
     	{
            if(s1[i] != s2[i])
            {
                cout << "Strings are not Equal" << endl;
                return 0;
            }
     	}
    	cout << "Strings are Equal" << endl;
	}
    return 0;
}
