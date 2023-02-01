#include<iostream>
using namespace std;
int main(){
    int* p = new int(66);
    char* ch = reinterpret_cast<char*>(p);
    cout << *p << endl;
    cout << *ch << endl;
    cout << p << endl;
    cout << ch << endl;

}