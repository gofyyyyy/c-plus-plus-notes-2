/*** Single Inheritance Deep Dive: Examples + Code ****/
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

class Derived: public Base { // class is being derived publically
    int data3;
public:
    void process();
    void display();
};

void Derived:: process(){
    data3 = data2 * getData1();      // data 1 ko tum function ke trow le ke auo kiyuke data 1 private member hai toh hum uske kisi public member function ke madad se acces kar sakte hai
}

void Derived :: display(){
    cout<<"The value of data 1 is "<<getData1()<<endl;
    cout<<"The value of data 2 is "<<data2<<endl;
    cout<<"The value of data 1 is "<<data3<<endl;
    
    }
    

int main(){

    Derived der;
    der.setData();
    der.process();
    der.display();
    
    return 0;
}