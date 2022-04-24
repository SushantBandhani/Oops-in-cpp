/*       
            FRIEND FUNCTION
** A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.
** A friend can be a function, function template, or member function, or a class or class template, in which case the entire class and all of its members are friends.
** Friend function is not a member function of class to which it is friend
** Friend function is declared in the class with friend keyword
** It must be defined outside the class to which it is friend
** Friend function can access any member of class to which is friend
** It has no caller object

*/


#include<iostream>
using namespace std;

class complex{
    private :
    int a ,b;
    public:

    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void show_data(){
        cout<<a<<" "<<b<<endl;
    }

    friend void func(complex);
};

 void func(complex c){
cout<<"Sum of a and b is : "<<c.a+c.b;
}

int main()
{
complex c1,c2;
c1.set_data(5,6);
func(c1);

}