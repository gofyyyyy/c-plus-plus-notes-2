/** Pointers to Derived Classes in C++ **/
#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    
        void display(void){
            cout<<" 1 Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    
        void display(void){
            cout<<" 2 Displaying Base class variable var_base "<<var_base<<endl;
            cout<<" 2 Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};

/*
1. base class ka pointer derived class ka obj point karsakta hai
2. agar apke base class ke pointer ko derived class se bhi point kara diya toh app agar us pointer ki madad se 
   display function run karoge toh base class ka run hoga 
*/

int main(){

  BaseClass * base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;
  base_class_pointer = &obj_derived; // pointing base class pointer to derived class

  base_class_pointer->var_base = 34;
//   base_class_pointer->var_derived = 134;  // will throw in error
  base_class_pointer->display();


    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}