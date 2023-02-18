/**Array of Objects Using Pointers in C++Array of Objects Using Pointers in C++ **/
#include<iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    public:
        void setdata(int a , float b){
            id = a;
            price = b;
            
        }

        void getdata(){
            cout<<" code of this item is "<<id<<endl;
            cout<<" price of this item is "<<price<<endl;
        }
};
    // 1 2 3 4 5
    //         ^
    //         |
    //         |
    //         ptr
    //     ptrTemp

int main(){

int size = 5;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. chickenshop Item
    // 2. vegshop Item
    // 3. meatshop Item
    // 4. hardwareshop Item
    // 5. general store item

    shopItem *ptr = new shopItem [size];
    shopItem *ptrTemp = ptr;
    int p;
    float q;
    int i;
    for (i = 0; i < size; i++){
        cout<< "Enter id and price item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p,q)
        ptr->setdata(p,q);
        ptr++;
    }

    for(i = 0; i < size; i++){
        cout<<"item number "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    
    return 0;
}