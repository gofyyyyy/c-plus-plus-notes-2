/**Vector In C++ STL**/
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Display this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<< " ";

        /** at method */
        // cout<<v.at(i)<<" ";
    }
        cout<<endl;
    
};

int main(){

    vector<int> vec1; //zero length integer vector
    int element, size=5;
    // cout<<"Enter the size of vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     /*push_back method*/
    //     vec1.push_back(element);
    // }
    /*pop_back method*/
    // vec1.pop_back();

    // display(vec1);
    /*insertion method*/
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter+1,100, 576);
    // display(vec1);

    vector<char> vec2(4); // 4 element character vector
    // vec2.push_back('3');
    // display(vec2);b
    //vector<char> vec3(vec2); //4 element character vector from vec2
    // display(vec3);
    vector<int> vec4(6, 23); //6 element vector of 3s
    display(vec4);
    cout<<vec4.size();
    return 0;
}