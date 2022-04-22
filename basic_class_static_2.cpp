
#include <iostream>

using namespace std;
class Account{
    private:
    int balance;
    public:
    static float roi;
    void set_balance(int b){
        balance =b;
    }
    void display(){
        cout<<roi*balance<<endl;
        roi=2;
    }
};

float Account::roi=3.5f;  //we have to define the static variable outside or we can just do like -> float Account::roi; and then can initialize our roi in main by the help of classname::roi=4.5f
//only if roi is public



int main()
{
Account a1,a2;
a1.set_balance(100);     //op->350
a1.display();  //when this was called the value of roi has changed to 2 ..so now for every other object the value of roi become 2
a2.set_balance(200);    // op->400 
a2.display();
Account a3;
a3.set_balance(300);
a3.display();
    return 0;
}
