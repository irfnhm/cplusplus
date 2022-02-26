//Algorithms - Problem 6

#include <iostream>
#include <vector>

using namespace std;

void plusMinus(vector <int> arr){
    int SIZE = arr.size();
    int pos = 0, neg = 0, zero = 0;
    for(unsigned int i = 0; i < SIZE; ++i){
        if(arr[i] == 0) zero++;
        else if (arr[i] < 0) neg++;
        else pos++;
    }
    cout << (double)pos/SIZE << endl;
    cout << (double)neg/SIZE << endl;
    cout << (double)zero/SIZE << endl;
}

int main(){
    vector <int> arr;
    int SIZE, elements;
    cin >> SIZE;
    for(unsigned int i = 0; i < SIZE; ++i){
        cin >> elements;
        arr.push_back(elements);
    }
    plusMinus(arr);
    return 0;
}