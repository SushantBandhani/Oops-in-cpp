#include <iostream>

using namespace std;
class Account{
    private:
    int balance;
    public:
    static float roi;
    void set_balance(long b){
        balance =b;
    }
    void display(){
        cout<<roi*balance;
    }
};

float Account::roi=3.5f;   // we have to define the static variable outside



int main()
{
    cout<<"Hello World";
Account a1,a2,a3;
a1.set_balance(5000000000000);
a1.display();
    return 0;
}