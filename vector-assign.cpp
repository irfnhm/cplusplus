#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for(auto i :  vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    /*This assigns 1 int with value 6. We can change 1 to any number we want,
    provided what the type can hold. Like 
    vec.assign(4, 8) -> This assigns 4 ints with values 8*/
    std::cout << "After using assign:" << std::endl;
    vec.assign(1, 6);
    for(auto i : vec){
        std::cout << i <<  std::endl;
    }
} 