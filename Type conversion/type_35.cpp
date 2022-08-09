#include<iostream>
using namespace std;

class complex{
 private:
 int a,b;
 public:
 complex(){

 }
 complex(int k){
    a=k;
    b=0;
 }
 void setdata(int x, int y){
    a=x;
    b=y;

 }
  void showdata(){
    cout<<a<<" "<<b;
  }

};

int main(){

complex c1;
int x=5;
c1=x;   // it will call the constructor with one argument..this method is used for type conversion from pretive to class type
c1.showdata();

}