// In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. 
// In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.



#include <iostream>
using namespace std;

class sid
{
private:
  int x = 11;

public:
  int y = 10;

protected:
  int z = 5;
};

class kid : public sid    
{
  /* y public
     z protected
     x inaccesible */
     public:
void display(){
    cout<<"Z="<<z;
    // cout<<"X" <<X<<endl;    //x cant be accesible here
    cout<<" Y="<<y<<endl;
}


};

class chid : protected sid
{
  /* y protected
    z protected
    x inaccesible */
    public:
void display(){
    cout<<"Inside protected inheritance "<<endl;
    cout<<"Z="<<z;
    // cout<<"X" <<X<<endl;    //x cant be accesible here
    cout<<" Y="<<y<<endl;
}


};

class pid : private sid
{
  /* y private
    z private
    x inaccesible */
public:
    void display(){
        cout<<"Inside private inheritance"<<endl;
    z=99;
    cout<<"Z="<<z;
    cout<<" Y="<<y<<endl;
}
};

int main()
{
  kid kid;
  chid chid;
  pid pid;
kid.display();
chid.display();
pid.display();
}