#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, temp, rev;
    cout << "Enter a String : ";
    getline(cin, s);
    
    temp = s; 
    reverse(temp.begin(), temp.end());   
    cout << "Reverse of string using built-in function : " << temp << endl;
        
    string :: reverse_iterator it;
    for(it = s.rbegin(); it != s.rend(); it++)
    {
        rev += *it;
    }
    cout << "Reverse of string using reverse_iterator : " << rev <<endl;
    
    return 0;
}        
