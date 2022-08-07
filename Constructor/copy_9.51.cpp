// shallow copy- it stores the refrence of objects to the original memory address..
// It stores the copy of original object and points to the refrences to the object
#include<iostream>
#include<vector>
using  namespace std;
class complex{
    private:
    int a,b;
    int *ptr;
    public:
    complex(int a,int b){
        this->a=a;
        this->b=b;
        ptr=new int;
    }
    complex(complex &c){   //if we donot make it compiler will make it ..compiler makes copy constructor and overloads assignment operator
        a=c.a;
        b=c.b;
        ptr=c.ptr;  //pointer variables of both objects(c1 and c2) are pointing to the same memory location ..
        // if one of object's memory get's deallocated ,the ptr memory will get deallocated also(because of what we have done in destructor) ..
        //so the other object's pointer variable will then be pointing to the invalid memory location ,such pointers are known as dangling pointers..
    }
    ~complex(){
        delete ptr;
    }
    
};

int main()
{
    complex c1(3,4);
    complex c2=c1; // c2 object has been created and c1 as an argument gets passed in it

    // we can do this also
    // complex c2; // in this copy constructor would not be called
    // c2=c1;

}