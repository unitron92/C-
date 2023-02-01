#include<iostream>
using namespace std;
 
int b; // Global b
 
int main()
{
int b = 10; // Local b
cout << "Value of global x is " << ::b;
cout << "\nValue of local x is " << b;
return 0;
}