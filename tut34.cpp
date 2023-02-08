/***Inheritance Syntax & Visibility Mode in C++****/

#include<iostream>
using namespace std;

// Base class
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id = inpId;
            salary = 35.0;
        }
        Employee(){} // <<<default constructor is importent
};

// Derived class syntex
/*
class {{derived-class-name}} : {[visibility-mode]} {{base-class-name}}
{
   class members/method/etc...
}
Note:
1. Default visibility mode is private
2. public visibility mode: public member of the Base class become public member of the derived class
3. private visibility mode: public member of the base class become private member of the derived class
4. private member are never inherited
*/

//Creating a Programmer class derived from Employee Base class

/*visibility mode means
 1. agar abb public hi inherit ho toh apke Base class ke public member
derived class ke public member ban jayenge
 2. agar app private inherit karoge toh Base class ke public member derived class ke private member ban jayenge*/

class Programmer : public Employee{     
    public:
    Programmer(int inpId){
        id = inpId;
    }
    int languageCode = 9;

    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    
    Employee irshad(1), cassie(2);  // ()<<constructor
    cout<<irshad.salary<<endl;
    cout<<cassie.salary<<endl;
    Programmer skillF(100);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}