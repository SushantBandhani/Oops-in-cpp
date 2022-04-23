#include<iostream>
using namespace std;
class Student{
     public:
     string name;
     string rollNumber;
     int presentDays;
     float percent;

     public:
     Student(){  //if we donot make this constructor the default constructor will run

     }

    void set_details(string name,string rollNumber,int presentDays){
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
   Student s[3];     
   cout<<"Enter name , rollnumber , number of days student was present : "<<endl;
   for(int i=0;i<3;i++){
       string name;
       string rollnumber;
       int presentDays;
       cin>>name>>rollnumber>>presentDays;
       s[i].set_details(name,rollnumber,presentDays);

   }

   for(int i=0;i<3;i++){
       s[i].calculateDaysOfPressence();
   }

   for(int i=0;i<3;i++){
       if(s[i].check()){
           cout<<s[i].name<<" can give exam "<<endl;
       }
       else{
           cout<<s[i].name<<" can not give exam "<<endl;
       }
   }
   

}