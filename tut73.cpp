/**Map In C++ STL**/
#include <iostream>
#include <map>
#include <string>

//Map is an associative array

int main(){

    std::map<std::string, int> marksmap;
    marksmap["Irshad"] = 98;
    marksmap["Jolyne"] = 97;
    marksmap["Sonya"] = 37;

    marksmap.insert({{"Kate Wilson" , 57 }, {"Lara", 50}});
    std::map<std::string, int>:: iterator it;
    for(it=marksmap.begin(); it!=marksmap.end(); it++){
        std::cout<<(*it).first<<" "<<(*it).second<<std::endl; //first point to Irshad second point to 98 value
    }

    //size method
    std::cout<<"The size is"<<marksmap.size()<<"\n";
    //max size method
    std::cout<<"Max size is "<<marksmap.max_size()<<"\n";
    //empty method
    std::cout<<"The empty return value "<<marksmap.empty()<<"\n";

    return 0;
}