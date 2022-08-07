#include<iostream>
#include<vector>
using  namespace std;
class complex{
    private:
    int a,b;
    const int x; // const variables should be initialized at the time of declaration
    int &u; // reference variable- it needs to be initialized also at the time of its declaration
    public:
    complex(int a,int b,int k,int &n):a(a),b(b),x(k),u(n){}
    
  void display(){
   cout<<a<<" "<<b<<" "<<x<<" "<<u;
  }
    
};

int main()
{
    int m=2;
    complex c1(3,4,5,m);
    c1.display();

}