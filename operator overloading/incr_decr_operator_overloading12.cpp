#include<iostream>
using namespace std;
class Integer{ 
    private:
    int x;
    public:
    void set_data(int x){
     this->x=x;
    }
    void show_data(){
        cout<<x<<" ";
    }
    Integer operator ++(){    // preincrement overloading
        Integer i;
        i.x=++x;
        return i;
    }
    Integer operator ++(int){
        Integer i;
        i.x=x++;
         return (i);
    }

};

int main()
{
    Integer i1,i2;
    i1.set_data(3);
    i1.show_data();  // i1 before any increment or decrement
    i2=++i1;
    i1.show_data();
    i2.show_data();


// for post increment operator 

Integer i3,i4;
i3.set_data(10);
i3.show_data();
i4=i3++;
i3.show_data();
i4.show_data();



}