#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char ch;
    fout.open("abc.txt",ios::app);
    int pos=fout.tellp();
    cout<<pos;
    fout<<"\ni am in college :";  
    pos=fout.tellp();
    cout<<pos;
    fout.close();
 
}