/** evisiting Pointers: new and delete Keywords in CPP **/
#include<iostream>
using namespace std;


int main(){

//Basic Example
int a = 5;
int* ptr = &a;
*ptr = 998;

cout<<" The value of a is "<<*(ptr)<<endl;

//new operator 

// int *p = new int(40);
float *p = new float(40.98);
cout<<" The value at address p is "<<*(p)<<endl;

int *arr = new int[3];
arr[0] = 23;
*(arr+1) = 10;
arr[2] = 46;
// delete operator
// delete[] arr;
cout<< "The value of arr[0] is"<< arr[0]<<endl;
cout<< "The value of arr[1] is"<< arr[1]<<endl;
cout<< "The value of arr[2] is"<< arr[2]<<endl;

    return 0;
}