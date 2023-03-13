#include <iostream>
using namespace std;

int main() {
   int *ptr1, *ptr2;
   int num = 10;
   
   ptr1 = &num;
   ptr2 = ptr1; 
   
   cout << "Nilai num = " << num << endl;
   cout << "Nilai *ptr1 = " << *ptr1 << endl;
   cout << "Nilai *ptr2 = " << *ptr2 << endl;

   return 0;
}