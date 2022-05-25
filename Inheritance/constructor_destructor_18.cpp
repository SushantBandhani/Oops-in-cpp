// Example of constructor and destructor works in inheritance 

#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int x ){
        cout<<"Inside A's constructor "<<endl;
        a=x;
    }
    ~A(){   //It will be called after B's destructor 
        cout<<"A's destructor is called "<<endl;
    }
};

class B:public A{
    int b;
    public:
    B(int x,int y):A(x){    //a is been initialized with x 
    cout<<"Inside B's constructor "<<endl;
        b=y;
    }
    ~B(){
        cout<<"B's destructor is called "<<endl;
    }
};
int main(){
   B obj(10,20);
}