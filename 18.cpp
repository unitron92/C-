#include<iostream>

class Myclass{
    public:
    void foo()& // only for L value object
    {
        std::cout<<"foo for L values";
    } 
    void foo()&&{ // only for R value objects
        std::cout<<"foo for R values";
    }  
};

int main()
{

Myclass m;

m.foo();




}