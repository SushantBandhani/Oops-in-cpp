#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("abc.txt",ios::ate|ios::app);
    cout<<fout.tellp()<<" "; // gives the position of the put pointer

    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();

}