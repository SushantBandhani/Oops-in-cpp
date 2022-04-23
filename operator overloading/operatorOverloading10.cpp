/*
           
           OPERATOR OVERLOADING => It is a compile time polymorphism.

** Polymorphism- it is the ability of message or data to be processed in more than one forms
** There are two types of polymorphism in c++
** 1- compile Time polymorphism(static or early binding) -> c++ supports this by features like templates,function overloading,and default arguments
** 2- Run time polymorphism(Dynamic or late binding) -> c++ supports run time polymorphism with the help of features like virtual functions.

**  whatt is operator overloading  **
** When an operator is overloaded with multiple jobs ,it is known as operator overloading 
** Any symbol can be used as a function name ->
  * If it is a valid operator in c language
  * If it is preceded by operator keyword
** We can not overload sizeof(),.,::,?: operators


*/


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
    complex operator +(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }

};


int main(){
complex c1,c2,c3;
c1.set_data(3,4);
c2.set_data(5,6);
c3=c1+c2;
c3.show_data();
}