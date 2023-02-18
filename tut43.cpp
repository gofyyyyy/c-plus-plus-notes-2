/** Initialization list in Constructors in Cpp **/
#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test{
    int a; 
    int b;
    public:
        // Test(int i , int j) : a(j) , b(i) 
        // Test(int i , int j) : a(j) , b(i+j) 
        // Test(int i , int j) : a(j) , b(4*j) 
        Test(int i, int j) : b(j), a(i+b) //-->Red flag this will create problems because a will be initilized first
        {
            // a = i;
            // b = j;

            cout<<"Constructor executed "<<endl;
            cout<<"value of a is:  "<<a<<endl;
            cout<<"value of b is:  "<<b<<endl;
        }
};

int main(){

    Test t(4, 6);
    
    return 0;
}