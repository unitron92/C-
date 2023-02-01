#include<iostream>

constexpr bool isprime(int x)
{
    if(x<2)
        return false;
    
    if(x%2==0)
    {
        return x==2;
    }
     if(x%3==0)
    {
        return x==3;
    }
     if(x%5==0)
    {
        return x==5;
    }

    for(int i=7; i*i<=x;i+=2)
        if(x%i==0)
            return false;
}
int main()
{
    constexpr int x = 4254;
    constexpr auto b =  isprime(x);

}