#include<iostream>
using namespace std;
class Student{
     public:
     string name;
     string rollNumber;
     int age;
     Student(){     //It will work as a default constructor for s2

     }

     Student(string name,string rollNumber,int age){
         this->name=name;
         this->rollNumber=rollNumber;
         this->age=age;
     }
     void displayDetails(){
         cout<<name<<" "<<age<<" "<<rollNumber<<endl;
     }
};

int main()
{
    Student s1("Sushant","DD1911303014",22);
    Student s2;

      s1.displayDetails();
      cout<<"Enter name ,age ,rollNumber for second student :"<<endl;
      cin>>s2.name>>s2.age>>s2.rollNumber;

      s2.displayDetails();

}


/*
This pointer
-> cannot ne modified.
-> used to refer the caller object in member function.
-> this is a local object pointer which is present in every instance member function containing the address of the caller object.
*/
