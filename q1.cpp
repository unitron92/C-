#include<iostream>

int a=10;
int main(){
    int a = a;   // ud
    std::cout<<a;
}

/*
Why is ud ?
    Scope resulation !!!
    To fix is - name spope ::
    int a = ::a;
*/