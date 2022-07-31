#include<iostream>
using namespace std;

class box{
    int x,y,z;
  public:
   void setdimension(int x,int y,int z)
     {
          this->x=x;
           this->y=y;
           this->z=z;
      }

      void display()
      {
        cout<<x<<" "<<y<<" "<<z<<" ";
      }
};
int main()
{

    box *p,exbox;
    p=&exbox;
    p->setdimension(100,200,5);
    p->display();

}