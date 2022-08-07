// Deep copy- when we create an object by copying data of another object along with the values of memory resources that reside outside the object
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

        ptr=new int;
       * ptr=*(c.ptr);
    }
    ~complex(){
        delete ptr;
    }
    
};

int main()
{
    complex c1(3,4);
    complex c2=c1; // c2 object has been created and c1 as an argument gets passed in it

}
//Now in this pointer variable of botth objects are pointing to different values