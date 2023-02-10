/**Multilevel Inheritance Deep Dive with Code Example in C++ **/

#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
    float maths;
    float physics;
public:
    void set_marks(float , float);
    void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout<<"The obtain in marks in maths are: "<<maths<<endl;
    cout<<"The obtain in marks in physics are: "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
public:
    void display_result(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is: "<<(maths+physics)/2<<"%"<<endl;
    }
};

int main(){

/*
 Notes:
  if we are inheriting B from A and C from B:[ A--->B--->C]
   1. A is Base class for B and B is the Base class for C 
   2. A-->B-->C is called Inheriritance Path 
*/

 Result irshad;
 irshad.set_roll_number(24);
 irshad.set_marks(97.0 , 98.0);
 irshad.display_result();

    return 0;
}