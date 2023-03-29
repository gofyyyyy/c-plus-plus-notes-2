/**Function Objects**/
#include <iostream>
#include <functional>
#include <algorithm>

int main(){
    //Function objects(Funtor) is : Function wrapped in a class so that it available like an object
    int arr[] = {2, 34, 56, 3, 4 , 16};
    std::sort(arr, arr+6); //asscending order sort
    std::sort(arr, arr+6, std::greater<int>()); //descending order sort function object pass
    for (int i = 0; i < 6; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    
    return 0;
}