#include <iostream>
using namespace std;

int main()
{
    string s, temp = "";
    cout << "Enter a String : ";
    getline(cin, s);
    
    string :: reverse_iterator it;
    for(it = s.rbegin(); it != s.rend(); it++)
    {
        temp += *it;
    }
        
    if(temp == s)
       cout << "Palindrome String"<<endl;
    else
        cout << "Not a Palindrome String"<<endl;
    
    return 0;
}
        
