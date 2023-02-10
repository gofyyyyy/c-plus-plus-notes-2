/***Multiple Inheritance Deep Dive with Code Example in C++ ****/

#include<iostream>
using namespace std;
/*
Syntex of inheriting of multiple Inheritance
class Derived: visibility-mode base1, visibility-mdoe base2
{
    class body of class "Derived" 
};
*/

class Base1{
    protected:
    int base1int;
public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
    protected:
    int base2int;
public:
    void set_base2int(int a){
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
    public:
        void show(){
            cout<<"The value of Base1: "<<base1int<<endl;
            cout<<"The value of Base2: "<<base2int<<endl;
            cout<<"The sum of these value is: "<<base1int + base2int<<endl;
        }

};

/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member function:
    set_base1int() --> public
    set_base2int() --> public
    show() --> public
*/

int main(){

    Derived irshad;
    irshad.set_base1int(67);
    irshad.set_base2int(45);
    irshad.show();
    
    return 0;
}