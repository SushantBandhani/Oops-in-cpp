// we can have pointer or refrence of abstract class
// If we do not override the pure virtual function in derived class, then derived class also becomes abstract class. 

#include<iostream>
using namespace std;

class A
{
public:
	virtual void display() = 0;
};

class B: public A
{
public:
	void display() { cout << "In B \n"; }
};

int main(void)
{
    // A ptr; error can't do this
	A *ptr = new B();
	ptr->display();
	return 0;
}
