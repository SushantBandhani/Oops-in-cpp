// one class type to another class type through the help of operator function
#include<iostream>
using namespace std;

class item{
        private:
        int a ,b;
        public:
        void showdata(){
            cout<<a<<" "<<b;
        }
        item(){

        }
        void setdata(int x,int y){
    a=x;
    b=y;
}
};

class product{
private:
int m,n;
public:
void setdata(int x,int y){
    m=x;
    n=y;
}
void showdata(){
    cout<<n<<" "<<m;
}

operator item(){
item temp;
temp.setdata(m,n);
return temp;
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