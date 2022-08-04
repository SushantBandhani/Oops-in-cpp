#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.txt");
    fin>>ch; // It will read the first character of the file 

    //to read the data from file

    while(!fin.eof()){
   cout<<ch;
   fin>>ch;
    }
    fin.close();  
}

// the output will be without space ,tab and newline ..because it treats them as data separator.. 
// so in case if you want proper format use -> ch=fin.get(); instead of fin>>ch, at line 8 and 15