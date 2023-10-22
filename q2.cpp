#include<iostream>

class Base {
    public:
    void func(int);
};

class Bas : public Base{
    public:
    void func(int, int);
};

int main(){
    Bas myBas;
    void func(10);  //  Syntatic error
}

/*
    name look up first  Class Bas!!!
    name scope !!!

*/