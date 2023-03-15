/**Writing our First C++ Template **/
#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            /* code */
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{

    //  vector v1(3);
    //  v1.arr[0] = 2;
    //  v1.arr[1] = 4;
    //  v1.arr[2] = 3;

    //  vector v2(3);
    //  v2.arr[0] = 2;
    //  v2.arr[1] = 4;
    //  v2.arr[2] = 3;
    //  int a = v1.dotproduct(v2);
    //  cout<<a<<endl;

    vector<double> v1(3);
    v1.arr[0] = 2.4;
    v1.arr[1] = 4.2;
    v1.arr[2] = 3.89;

    vector<double> v2(3);
    v2.arr[0] = 2.4;
    v2.arr[1] = 4.3;
    v2.arr[2] = 3.6;
    double a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}