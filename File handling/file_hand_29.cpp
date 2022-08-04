#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.txt");  //it helps to open the myfile ,if there is no myfile in folder then it will create and then it will open it..we can give path too here of file
    fout<<"hello ,My name is sushant bandhani"<<"\n"<<"i live in america"; // This text will get write on my file

    fout.close(); //it is used to close the file and save it in secondary storage
}