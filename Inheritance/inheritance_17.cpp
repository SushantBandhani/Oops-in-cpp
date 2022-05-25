#include<iostream>
using namespace std;

//** A's constructor will be called automatically first even if we make object of b class 
class A{
    public:
    A(){
        cout<<"I am A's constructor"<<endl;
    }
};

class B:public A{
    public:
    B(){
        cout<<"I am B's constructor";
    }
};
int main(){
   B obj;
}