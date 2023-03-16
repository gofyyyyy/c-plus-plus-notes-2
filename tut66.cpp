/**C++ Templates: Class Templates with Default Parameters**/
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class irshad
{
public:
    T1 a;
    T2 b;
    T3 c;
    irshad(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    irshad<> u(2, 4.5, 'j');
    u.display();

    cout << endl;

    irshad<int, float, double> r(4, 3.6, 6.4543);
    r.display();
    return 0;
}