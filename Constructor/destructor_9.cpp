/*
      DESTRUCTOR IN C++ 

Destructor is an instance member function which is invoked automatically whenever objec is going to be destroyed.
It means that destructor is the last function that is going to be called befor an object is destroyed

** Name of destructor is same as class with tild(~) sign
** Destructor donot have a return type 
** Destructor takes no argument (no overloading is possible)


*/


#include<iostream>
using  namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(){     
        cout<<"Constructor is called  "<<endl;
    }
    ~complex(){
        cout<<"Destructor is called"<<endl;
    }
    
};

void func(){
    complex c1,c2;
}

int main()
{
    func();
    cout<<"Hello";  

    
}