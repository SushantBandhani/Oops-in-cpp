#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << a << " " << b;
    }

    inline void inlineBlock(); // see
};

// member function inside class are by default inline

// but if you declare a function inside a class and define them outside the class, they are no longer inline then you have to use inline keyword in the declaration of that function inside the class if you want that function to be inline. (see above)

void complex::inlineBlock()
{
    cout << "\nthis is the killer block " << a * b;
}

int main()
{
    complex s;
    s.setData(2, 3);
    s.getData();
    s.inlineBlock();
}