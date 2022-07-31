#include<iostream>
using namespace std;
class A{
    public:
    void f1()  // Example of method overriding
    {
        cout<<"Inside A's class "<<"\n";
    }
    void f2(){                             //Example of method hiding 
        cout<<"f2 , Inside A's class "<<"\n";
    }
};
class B:public A{
    public:
    void f1()
    {
        cout<<"Inside B's class "<<"\n";
    }
    void f2(int x){
        // A::f2();  // If i want to call A's f2 from child B
        cout<<"value of x is :"<<x<<" "<<"\n";
        cout<<"f2 , Inside B's class "<<"\n";
    }
};


int main()
{

    B obj;
    obj.f1(); // due to early binding concept it will call the f1 which is located inside B's class
    // obj.f2();  // this will give error because compiler will not go to A's class for finding f2() ..if B did'nt have function named f2, only then compiler will go to A's class and execute f2() of A's
    obj.f2(4);
}