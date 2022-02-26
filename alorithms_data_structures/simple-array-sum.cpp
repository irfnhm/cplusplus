//Algorithms - problem 2

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> pool;
    int size, elements, sum = 0;
    cin >> size;
    for(unsigned int i = 0; i < size; ++i){
        cin >> elements;
        pool.push_back(elements);
    } 

    for(unsigned int i = 0; i < size; ++i){
        sum += pool[i];
    }
    cout << sum << "\n";
    return 0;
}