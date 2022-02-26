//Algorithms - Problem 9

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> arr;
    int SIZE, K, Q, elements, m;
    cin >> SIZE >> K >> Q;
    for(unsigned int i = 0; i < SIZE; ++i){
        cin >> elements;
        arr.push_back(elements);
    }

    for(unsigned int i = 0; i < Q; ++i){
       cin >> m;
       cout << (arr[((m - K) % SIZE + SIZE) % SIZE]) << endl;
    }
    return 0;
}
