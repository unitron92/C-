#include<iostream>
 using namespace std;
int x = 10;
int main()
{

    int x = ::x;
    cout<<x;
}