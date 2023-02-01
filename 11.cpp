#include<iostream>
using namespace std;


void foo(int);
int main()
{
/*
    class Data{

                    // class member !!!
                        //static data member 
                        // non-static data member   |
                    // member function !!! | ----> class members
                        //static member function
                        // non-static member function  
                    //member type !!!      |
                    // method

    void foo(int); // non-static member function
    static void func(int ,int); // static member function
    int mx, my;  // ---> non-static data member
    static double msval; //----> static data member

    class Nested{
        // Nested type
    };

    using integer = int;

    };*/


int foo = 10;
::foo(19);
//out<< x;

}