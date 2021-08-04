#include<bits/stdc++.h>
using namespace std;
//function overloading
class A
{
    public:
        void fun()
        {
            cout<<"NO arguments"<<endl;
        }
        void fun(int n)
        {
            cout<<"Int argument"<<endl;
        }
        void fun(double n)
        {
            cout<<"Double argument"<<endl;
        }
};
class Complex
{
private:
int real,imag;
public:
Complex(int r=0, int img=0)
{
    real=r;
    imag=img;
}
//operator overloading
Complex operator + (Complex &c3)
{
    Complex res;
    res.imag=imag+c3.imag;
    res.real=real+c3.real;
    return res;
}
void display()
{
    cout<<real<<" + "<<imag<<"i"<<endl;
} 
};

//Fuction Overriding
class Base
{
    public:
    virtual  void print()
    {
        cout<<"Base class Print Function"<<endl;
    }
    void display()
    {
             cout<<"Base class Display Function"<<endl;
    }
};
class derived: public Base{
    public:
    void print()
    {
        cout<<"Derived class Print Function"<<endl;
    }
    void display()
    {
             cout<<"Derived class Display Function"<<endl;
    }
};
int32_t main()
{
    Complex c1(12,7), c2(6,7);
    Complex c3= c1+c2;               //Adding two complex number
    c3.display();
    Base *baseptr;
    derived d;
    baseptr=&d;

    baseptr->print();
    baseptr->display();
    return 0;
}