/***Member Function Templates & Overloading Template Functions***/
#include <iostream>
using namespace std;

template <class T>
class uwu{
    public:
        T data;
        uwu(T a){
            data = a;
        }
        void display();
};
template <class T>
void uwu<T> ::  display(){
            cout<<data;
        }

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am Templatised func() "<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"I am Templatised func() "<<a<<endl;
}
int main(){
    
    // uwu<int> u(32);
    // uwu<char> u('s');
    // uwu<float> u(7.8);
    // cout<<u.data<<endl;
    // u.display();

    //func(3); //Exact match takes the higest priority matlab template wala run nahi hoga
    func1(3);
    return 0;
}