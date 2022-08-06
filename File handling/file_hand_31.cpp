#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("abc.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch; // reading the character from file 
    pos=fin.tellg();
    cout<<pos; //now it will point to the next location
}