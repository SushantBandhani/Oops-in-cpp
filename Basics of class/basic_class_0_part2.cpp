#include<iostream>
using namespace std;
class Student{
     private:
     string name;
     string rollNumber;
     int presentDays;
     float percent;

     public:

     Student(string name,string rollNumber,int presentDays){
         this->name=name;
         this->rollNumber=rollNumber;
         this->presentDays=presentDays;
     }
     void calculateDaysOfPressence(){
          percent=(presentDays/300.0)*100;
     }

     int check(){
         if(percent<70.0){
             return 0;
         }
         else{
             return 1;
         }
     }
};

int main()
{
    Student s1("Sushant","DD1911303014",250);
    s1.calculateDaysOfPressence();
    if(s1.check()){
        cout<<"You can give Exam ";
    }
    else{
        cout<<"You cannot give Exam ";
    }

    // Student s[10];
   

}