#include <iostream>   
#include <ostream>      // std::flush  
#include <fstream>      // std::ofstream   
using namespace std; 
    
int main( )     
{	   
   	cout << "a";    
   	cout << "b" << ends;    // ends
   	cout << "c" << endl;    // endl
   	cout << "d" << endl;
  	
  	ofstream outfile ("test.txt");  
  	
  	for (int n=0; n<100; n++)  
    	outfile << n << " " << flush;  
	 	 
	outfile.close();  
  	
  	return 0;   
}  
