#include<iostream>

void foo(float, double, int)
{
    std::cout<<"1";
}
void foo(int, long, unsigned)
{
    std::cout<<"2";
}
void foo(double, unsigned, float)
{
    std::cout<< "3";
}


int main()
{

foo(12u, 6u, 1.2);
//foo(true, 12, 4.5);

}