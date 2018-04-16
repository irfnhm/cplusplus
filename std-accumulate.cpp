#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>

//cplusplus.com implementation
template <class InputIterator, class T>
T accumulate_S(InputIterator first, InputIterator last, T init)
{
  while (first!=last) {
    init = init + *first;  
    ++first;
  }
  return init;
}

//cppreference.com implementation for multiple
template<class InputIt, class T, class BinaryOperation>
T accumulate_P(InputIt first, InputIt last, T init, BinaryOperation op)
{
    for (; first != last; ++first) {
        init = op(init, *first);
    }
    return init;
}


int main(){
    std::vector <int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    std::cout << accumulate_S(vec.begin(), vec.end(), static_cast<int>(0)) << std::endl;

    //this doesn't work yet
    std::cout << accumulate_P(vec.begin(), vec.begin(), 1 , std::multiplies<int>());
}
