// dynamic binding concept can be implemented by the help of virtual funtion..in this the binding of the functions will happen at
//run time
#include<iostream>
using namespace std;

class Car{
public:
virtual void shiftgear(){
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