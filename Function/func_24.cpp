// this concept helps for generalisation.Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation.
// PURE VIRTUAL FUNCTION
#include<iostream>
using namespace std;
 
class A
{
   int x;
public:
    virtual void fun() = 0;    // we can not make object of class A because it has pure virtual function.class will be abstract if it has atleast one pure virtual function
    int getX(int x,int y) {    // we can also do this ..so B is child of A ,this function will be accessible to B also
        
         return x+y;
          }
};
 
class B: public A
{
    int y;
public:
    void fun() { 
     cout<< "The func() function should be defined in child class : ";
     }
};
 
int main(void)
{
    B d;
    d.fun();
   cout<< d.getX(4,5);
    return 0;
}