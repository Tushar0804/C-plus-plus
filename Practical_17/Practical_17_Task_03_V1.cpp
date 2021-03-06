#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;

void printmap(map<int, string> mp)						// function for printing the elements in a map.
{
    map<int, string>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << "\n";
    cout << '\n';
}

int main()
{
    map<int, string> m;
    
    m.insert(pair<int, string>(6, "Map"));				// Inserting Elements in  random Order map.
    m.insert(pair<int, string>(3, "Iterator"));
    m.insert(pair<int, string>(8, "pair"));
    m.insert(pair<int, string>(1, "coders"));
    m.insert(pair<int, string>(9, "algorithm"));
    m.insert(pair<int, string>(2, "begin"));
    m.insert(pair<int, string>(5, "end"));
    
    printmap(m);										// printing

    return 0;
}
