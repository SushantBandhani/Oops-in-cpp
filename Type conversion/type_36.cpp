#include<iostream>
using namespace std;

class complex{
 private:
 int a,b;
 public:
 complex(){

 }

 void setdata(int x, int y){
    a=x;
    b=y;

 }
  void showdata(){
    cout<<a<<" "<<b;
  }

  operator int(){  // operator keyword is used when we want to convert from class type to primitive type
    return a;
  }

};

int main(){

complex c1;
c1.setdata(4,5);
int x;
x=c1;
cout<<x;

}