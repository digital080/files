#include <iostream>
#include <fstream>
using namespace std;

//To run: g++ -std=c++14 writetext.cpp -o writetext.out


int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   //cout <<a " " << b <<" "<< c;//display data to console (i.e. as formatted chars)
   
   ofstream writetext("abc.txt");
   
   if(writetext){
	   writetext << a << " " << b << " " << c << " ";
	   
	 }
	 else{
		 cout << "Error opening file" << endl;
	 }
		writetext.close();
		
		/*
   cout << a << " " << b << " " << c;
   cout << endl << endl;
 
 */
 
   return 0;
}
