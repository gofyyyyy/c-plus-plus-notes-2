/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

/** using Multiple inheritance **/
#include<iostream>
#include<math.h>
using namespace std;

class simple{
    protected:
    int c , i;
public:
    void set_number(int a , int b){
        c = a;
        i = b;
    }

    void display_number(){
        cout<<" + " <<(c + i)<<endl;
        cout<<" - " <<(c - i)<<endl;
        cout<<" * " <<(c * i)<<endl;
        cout<<" / " <<(c / i)<<endl;
    }
};

class scientific{
    protected:
    int x , y;
public:
    void set_root(int a , int b){

    x = a;
    y = b;

    }
    void display_root(){
    cout<<"square root x "<<sqrt(x)<<endl;
    cout<<"square root y "<<sqrt(y)<<endl;
    cout<<"cube root of x "<<cbrt(x)<<endl;
    cout<<"cube root of y "<<cbrt(y)<<endl;
    cout << "The value of sin(x) is " << sin(x) << endl;
    cout << "The value of sin(y) is " << sin(y) << endl;
    cout << "The value of cos(x) is " << cos(x) << endl;
    cout << "The value of cos(y) is " << cos(y) << endl;
    cout << "The value of tan(x) is " << tan(x) << endl;
    cout << "The value of tan(y) is " << tan(y) << endl;
    }
};


class hybrid : public simple , public scientific{
    public:
    void show(int a, int b){
        set_number(a , b);
        display_number();
        set_root(a, b);
        display_root();
    }
};


int main(){
    
    int y , z;
    cout<<" Enter the two value "<<endl;
    cin>>y>>z;

    hybrid h;
    h.show(y,z); 

    return 0;
}

// class simple --> protected
// class scientific --> protected

// member function

// set_number --> public
// set_root --> public

// show --> public