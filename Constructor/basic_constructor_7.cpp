//CONSTRUCTOR OVERLOADING IN CPP

#include<iostream>
#include<vector>
using  namespace std;
class complex{
    private:
    int a,b,x;
    public:
    complex(){     
        // cout<<"Hello world "<<endl;  
    }
    complex(int a,int b){
        this->a=a;
        this->b=b;
        cout<<a<<b;
    }
    complex(int x){
     this->x=x;
    }
    complex(vector<int>& vec){     //this constructor has parameter of type vector and receieve an argument of type vector

        for(int i=0;i<5;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
    }
    
};

int main()
{
    complex c1;
    complex c2(5);
    complex c3(3,4);
    vector<int>vec;
    complex c4(vec);
}