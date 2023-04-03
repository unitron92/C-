#include <iostream>
#include <cstdint>
const float init = 0.2;

 int main(){
    float b = -0.3F;
    float x = init * (-1.0F);    
    if(b<x)
    {
        std::cout<<"lesss , "<<x;
    }
    else{
        std::cout<<"bigger";
    }
}