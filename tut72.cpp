/**List In C++ STL**/
#include <iostream>
#include <list>

void display(std::list<int> &lst){
    std::list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++)
    {
        /* code */
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
};

int main(){

    std::list<int> list1; //List of 0 Length
    list1.push_back(2);
    list1.push_back(7);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(12);
    display(list1);

    /*Removing element from the list**/
    // list1.pop_back();
    // list1.pop_back();
    // list1.pop_front();
    // middle delete 
    // list1.remove(9);

    // sorting the list
    // list1.sort();
    // display(list1);

    //Reversing the list
    list1.reverse();
    display(list1);

    std::list<int> list2(4); //Empty list of size 7
    std::list<int>:: iterator iter;
    iter=list2.begin();
    *iter= 43;
    iter++;
    *iter=67;
    iter++;
    *iter= 45;
    iter++;
    *iter=89;
    iter++;

    display(list2);
    list1.merge(list2);
    list1.sort();
    list2.sort();
    std::cout<<"List 1 after merging: ";
    display(list1);
    return 0;
}