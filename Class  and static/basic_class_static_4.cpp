
#include <iostream>

using namespace std;
class Account{
    private:
    int balance;
    static float roi;
    public:
    void set_balance(long b){
        balance =b;
    }
    
    static void set_roi(int x){
        roi=x;
    }
    void display(){
        cout<<roi*balance<<endl;
    }
};

float Account::roi;



int main()
{
    Account a1,a2;

// Account::roi=20;   now we cant do this because roi variable is private now ..so to set roi variable value
//we have to make an static function in class which will set the value of roi


a1.set_roi(20);  // can set the value of roi by using object.set_roi(x)
a1.set_balance(10);
a1.display();

a2.set_balance(30);  
a2.display();    //roi ki value upr set ho ho gaye thi to we dont have to reinitialize the roi for different objects


    return 0;
}
