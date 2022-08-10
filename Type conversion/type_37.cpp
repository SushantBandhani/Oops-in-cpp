// one class type to another class type through the help of constructor
#include<iostream>
using namespace std;
class product{
private:
int m,n;
public:
void setdata(int x,int y){
    m=x;
    n=y;
}
int getM(){
    return m;

}
int getN(){
    return n;
}

};
class item{
        private:
        int a ,b;
        public:
        void showdata(){
            cout<<a<<" "<<b;
        }
        item(){

        }

        item(product p){
            a=p.getM();   //p.m we can't because m is private in product class, thats why we have used these functions
            b=p.getN();
        }
};


int main()
{
item i1;
product p1;
p1.setdata(3,4);
i1=p1;
i1.showdata();
}