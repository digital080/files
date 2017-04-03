
#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   //cout <<a " " << b <<" "<< c;//display data to console (i.e. as formatted chars)
   
   ofstream writetext("abc.bin", ios::binary);
   
   if(writetext){
	   //writetext << a << " " << b << " " << c << " ";
	   
	   writetext.write(reinterpret_cast <char*> (&a), sizeof(a));//To a bin file
	   writetext.write(reinterpret_cast <char*> (&b), sizeof(b));
	   writetext.write(reinterpret_cast <char*> (&c), sizeof(c));
	   
	   /*
	   writetext << a << " " << b << " " << c << " "; //To a txt file
	    */
	    
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
