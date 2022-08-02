//By the help of generic programming we can write the code whivh will work for all of the data types.
// It is used to increase the efficiency of code
// The advantages of Generic Programming are

// Code Reusability
// Avoid Function Overloading
// Once written it can be used for multiple times and cases.

//  Templates are used in c++ for generic programming ..it is like a blue print for creating generic classes or function
// templates can be used in two types
// 1- function template
// 2-class template


// Function template example
#include<iostream>
using namespace std;

template <class X,class Y> X func(X a,Y b){
    X c;
    c=a+b;
    return c;
}
int main()
{
  cout<<func(4,5)<<"\n";
  cout<<func<int>(10,100)<<"\n";
  cout<<func<float>(2.5,3.599)<<"\n";
  cout<<func(50,3.99999)<<" ";
}