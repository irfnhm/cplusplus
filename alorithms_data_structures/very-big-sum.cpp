//Algorithms - problem 4
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <long long int> pool;
    int size, elements;
    long long int sum = 0;
    cin >> size;
    for(unsigned int i = 0; i < size; ++i){
        cin >> elements;
        pool.push_back(elements);
    }
    for(unsigned int i = 0; i < size; ++i){
        sum += pool[i];
    }
    cout << sum << endl;
    return 0;
}