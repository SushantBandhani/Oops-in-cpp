//UNARY OPERATOR OVERLOADING 

#include<iostream>
using namespace std;
class complex{
  int a,b;
  public:
  void set_data(int a,int b){
   this->a=a;
   this->b=b;
  }
  void show_data()
    {
        cout<<a<<" "<<b;
    }
    complex operator -(){
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }

};


int main(){
complex c1,c2,c3;
c1.set_data(3,4);
c2=-c1;
c2.show_data();
}