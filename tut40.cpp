/**Ambiguity Resolution in Inheritance**/

#include<iostream>
using namespace std;

class Base1 {
    public:
        void Hi(){
            cout<<"Where are you"<<endl;
        }
};

class Base2 {
    public:
        void Hi(){
            cout<<"kaha pe hai"<<endl;
        }
};

class Derived : public Base1 , public Base2 {
    int a;
    public:
    void Hi(){
        Base2::Hi();

    }
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};


int main(){
    // Ambibuity 1
    // Base1 Base1obj;
    // Base1obj.Hi();

    // Base2 Base2obj;
    // Base2obj.Hi();

    // Derived h;
    // h.Hi();


    // Ambibuity 2
    
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}