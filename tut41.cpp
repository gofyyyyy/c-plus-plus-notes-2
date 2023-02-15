/** Code Example Demonstrating Virtual Base Class in C++ **/

#include<iostream>
using namespace std;
/*
student --> test
student --> sports
test --> Result
test --> Result
*/

class students{
    protected:
    int roll_no;
public:
    void set_roll_no(int a){
        roll_no = a;
    }

    void display_roll_no(void){
        cout<<" Student roll no is "<<roll_no<<endl;
    }
};

class Test : virtual public students{
    protected:
    float maths , physics;
    public:
        void set_marks(float m1 , float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout <<" your result is here"<<endl;
            cout <<" Maths "<<maths<<endl;
            cout <<" physics "<<physics<<endl;
        }
};

class sports : virtual public students{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<" your PT score is "<<score<<endl;
        }

};

class Result : public Test , public sports{
    private:
        float total;
    public:
        void display(void){
        total = maths + physics + score;
        display_roll_no();
        print_marks();
        print_score();
        cout<< "your Total score is "<<total<<endl; 
        }
};

int main(){

    Result irshad;
    irshad.set_roll_no(456);
    irshad.set_marks(79.0 , 80.0);
    irshad.set_score(67.9);
    irshad.display();
    
    return 0;
}