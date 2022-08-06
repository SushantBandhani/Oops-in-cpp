#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin;
   fin.open("def.txt");
   cout<<fin.get()<<"\n"; // it is used to read the character from the file
   cout<<(char)fin.get()<<"\n";
   cout<<fin.tellg()<<"\n";

   // get pointer is pointing to 2nd location but if i want that get should point to 0 again then i will do--
   fin.seekg(0);

   cout<<fin.tellg()<<"\n";

   fin.seekg(3,ios_base::cur);
   cout<<fin.tellg()<<"\n";

   fin.seekg(2,ios_base::beg);
   cout<<fin.tellg()<<"\n";

   fin.seekg(-4,ios_base::end);
   cout<<fin.tellg();



 
}