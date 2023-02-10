
#include<iostream>
using namespace std;

class Base{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();

};

void Base:: setData(void){
    data1 = 10;
    data2 = 30;
}
int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

class Derived: private Base { // class is being derived publically
    int data3;
public:
    void process();
    void display();
};

void Derived:: process(){
    setData();    // <<< yeah humne tut19.cpp main deka tha direct andar call kar sakte hai
    data3 = data2 * getData1();      
}

void Derived :: display(){
    cout<<"The value of data 1 is "<<getData1()<<endl;
    cout<<"The value of data 2 is "<<data2<<endl;
    cout<<"The value of data 1 is "<<data3<<endl;
    
    }
    

int main(){

    Derived der;
    // der.setData();
    der.process();
    der.display();
    
    return 0;
}