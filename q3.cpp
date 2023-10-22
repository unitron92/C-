#include<iostream>

class Bir {
    public:
        void func(long double);
    private:
        void func(double);
};

int main(){
    Bir obj;
    obj.func(2.3f); // Problem caming from fuction overloading !
}

/*
 Has function overloading but !!!
 accces  control is problem !!!
 Keep on mind promotion and convertion  and promotion is prioritet !!!
*/