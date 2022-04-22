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

    Account::set_roi(3.5f); // Static variable is a class variable and we can call the static function by class name 
    Account a1,a2;

a1.set_balance(10);
a1.display();

a2.set_balance(30);  
a2.display();    //roi ki value upr set ho ho gaye thi to we dont have to reinitialize the roi for different objects


    return 0;
}

