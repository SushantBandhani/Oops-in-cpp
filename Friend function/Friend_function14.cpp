#include<iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
    void set_data(int x){
      a=x;
    }
    friend void func(A,B);
};


class B{
    private:
    int b;
    public:
    void set_data(int x){
      b=x;
    }
    friend void func(A,B);
};

void func(A o1,B o2){
    cout<<"Sum of both private variables of different classes is : "<<o1.a+o2.b;
}



int main(){
    A a;
    B b;
    a.set_data(5);
    b.set_data(6);
    func(a,b);

}