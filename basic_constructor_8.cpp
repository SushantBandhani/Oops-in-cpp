//COPY CONSTRUCTOR IN C++ => A copy constructor is a member function that initializes an object of the same class

#include<iostream>
#include<vector>
using  namespace std;
class complex{
    private:
    int a,b,x;
    public:
    complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    complex(complex &c){   //we have to make parameter as refrence variable other wise it will give error
        a=c.a;
        b=c.b;
    }
    
};

int main()
{
    complex c1(3,4);
    complex c2=c1; // c2 object has created and c1 as an argument gets passed in it

}