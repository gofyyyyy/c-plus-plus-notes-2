/** this Pointer in C++ **/
#include<iostream>
using namespace std;

class A{
    int a;
    public:
        // A & setdata(int a)
        void setdata(int a)
        {
            this->a = a;
            // return *this;
        }

        void getdata(){
            cout<<" The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setdata(78);
    a.getdata();

    return 0;
}