// polymorphism as the ability of a message or data to be displayed in more than one form.


// polymorphism is of two types:

// Compile-time Polymorphism -  Compile time polymorphism, also known as Static Polymorphism, refers to the type of Polymorphism that happens at compile time.
// What it means is that the compiler decides what shape or value has to be taken by the entity in the picture.

// it can be done by function overloadinng ,operator overloading

// Runtime Polymorphism-Runtime polymorphism, also known as Dynamic Polymorphism, refers to the type of Polymorphism that happens at the run time. What it means is it can't be decided by the compiler. 
// Therefore what shape or value has to be taken depends upon the execution. Hence the name Runtime Polymorphism.

//it can be done by function overriding


// The problem in below code is we want that sports car should run its method of shift gear but due to
//early binding it is calling the method present in A(parent class).. so this problem is occuring because of overriding 
#include<iostream>
using namespace std;

class Car{
public:
void shiftgear(){
    cout<<"Old method of changing the car gear  ";
}
};
class SportsCar:public Car{

void shiftgear(){
    cout<<"Advance method of shifting the gears ";
}

};




int main()
{

    Car *ptr,obj1;
    SportsCar obj2;
    ptr=&obj2;

    ptr->shiftgear();

}

// solution in func_23.cpp