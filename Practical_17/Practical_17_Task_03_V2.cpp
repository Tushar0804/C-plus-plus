#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;

void printmap(map<int, string> mp)											// function for printing the elements in a map.
{
    map<int, string>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << "\n";
    cout << '\n';
}

int main()
{
    map<int, string> m;
    
    m.insert(pair<int, string>(6, "Map"));									// Inserting Elements in random Order map.
    m.insert(pair<int, string>(3, "Iterator"));
    m.insert(pair<int, string>(8, "pair"));
    m.insert(pair<int, string>(1, "coders"));
    m.insert(pair<int, string>(9, "algorithm"));
    m.insert(pair<int, string>(2, "begin"));
    m.insert(pair<int, string>(5, "end"));
    
    cout << "Printing Map:" << endl;										// printing
    printmap(m);	
    																		
    
    auto itr = m.find(2);													// Find an element as key from this map
    cout << "itr is pointing to: " << itr->first << " " << itr->second << endl;
    
    
    map<int, string> copyMap = m;											//Assigning one map to another
    cout << "\nPrinting copyMap :" << endl;
    printmap(copyMap);
    
    
    cout << "\nDeleting a key-value from copyMap : 9 algorithm" << endl;	// Deleting a key from map
    m.erase(9);
    cout << "Printing map After deleting key = 9 from it" << endl;
    printmap(m);
    
    
    cout << "\nSize of the map is : " << m.size() << endl;					// Finding size, max size of a map
    cout << "Max Size of map is : " << m.max_size() << endl;
    
    
    cout << "\nChecking map is empty or not after: " << endl;				// Checking a map is empty or not
    if (m.empty())
        cout << "Map is empty" << endl;
    else
        cout << "Map is not empty" << endl;
        
    
    m.clear();																// Clearing a map
    cout << "Printing a Map after Clearing it :\n";
    printmap(m);
    

    return 0;
}
