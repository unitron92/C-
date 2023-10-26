#include<iostream>
using namespace std;  
// here is Abstract class  
class Shape  
{  
    public:  
    virtual int cal_Area() = 0;  
};  
class Square : public Shape  
{  
    int a;  
    public:  
    Square(int l)  
    {  
        a = l;  
    }  
    int cal_Area()  
    {  
        return a*a;    
    }  
};  
class Circle : public Shape  
{  
    int r;  
    public:  
      
    Circle(int x)  
    {  
        r = x;  
    }  
    int cal_Area()  
    {  
        return 3.14*r*r ;  
    }  
};  
class Rectangle : public Shape  
{  
    int l;  
    int b;  
    public:  
    Rectangle(int x, int y)  
    {  
       l=x;  
       b=y;  
    }  
    int cal_Area()  
    {  
        return l*b;  
    }  
};  
int main()   
{  
      
    Shape *shape;  
    Square s(3.4);  
    Rectangle r(5,6);  
    Circle c(7.8);  
    shape =&s;  
    int a1 =shape->cal_Area();  
    shape = &r;  
    int a2 = shape->cal_Area();  
    shape = &c;  
    int a3 = shape->cal_Area();  
    std::cout << "The area of square is: " <<a1<< std::endl;  
    std::cout << "The area of  rectangle is: " <<a2<< std::endl;  
    std::cout << "The area of  circle is: " <<a3<< std::endl;  
    return 0;  
} 