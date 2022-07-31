//NEW

// The new operator requests for the memory allocation in heap. If the sufficient memory is available, 
// it initializes the memory to the pointer variable and returns its address.


// DELETE 

// The delete operator is used to deallocate the memory.
// User has privilege to deallocate the created pointer variable by this delete operator.


#include <iostream>
using namespace std;
int main () {
   int *ptr1 = NULL;
   ptr1 = new int;
   float *ptr2 = new float(2.5);
   int *ptr3 = new int[50];
   *ptr1 = 280;
   cout<< *ptr1 <<"\n";
   cout<<*ptr2 <<"\n";
   if (!ptr3)
   cout << "Allocation of memory failed\n";
   else {
      for (int i = 0; i < 15; i++)
      ptr3[i] = i+1;
      cout << "Value's stored in array are : ";
      for (int i = 0; i < 15; i++)
      cout << ptr3[i] << " ";
   }
   delete ptr1;
   delete ptr2;
   delete[] ptr3;
   return 0;
}