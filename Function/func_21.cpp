//FUNCTION OVERLOADING CONCEPT
//function overloading is the way to implement polymorphism
// It is a feature of object-oriented programming where two or more functions can have the same name but different parameters.
// When a function name is overloaded with different jobs it is called Function Overloading.

#include<iostream>
using namespace std;
class A{
    public:
 
    void f2(){                      
        cout<<"Default"<<"\n";
    }

    void f2(int x){
        cout<<"Value of x is: "<<x<<"\n";

    }

// cannot overload functions distinguished by return type alone

    // int f2(){
    //     cout<<" Hello ";
    // }

int f2(int a,int b){
    cout<<"value of a and b is : "<<a<<", "<<b<<"\n";
    cout<<"Sum is: ";
    return (a+b);
}

};



int main()
{

A obj1;
obj1.f2();
obj1.f2(5);
cout<<obj1.f2(10,9);


}