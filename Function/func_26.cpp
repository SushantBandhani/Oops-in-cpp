// example of abstract class concept with constructor

#include<iostream>
using namespace std;

class A
{
protected:
int x;
public:
virtual void fun() = 0;
A(int i) {
			x = i;
			cout<<"Constructor of A called\n";
			}
};

class B: public A
{
	int y;
public:
	B(int i, int j):A(i) { y = j; }
	void fun() { cout << "x = " << x << ", y = " << y<<'\n'; 
    }
};

int main(void)
{
	B d(4, 5);
	d.fun();

	A *ptr=new B(6,7);
	ptr->fun();
	return 0;
}
