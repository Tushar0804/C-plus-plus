#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter First String : ";
    getline(cin, s1);
    cout << "Enter Second String : ";
    getline(cin, s2);
 
	cout << "On comparing String 1 with String 2, we get : " << s1.compare(s2) << endl;

    return 0;
}
