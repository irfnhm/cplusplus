//Algorithms - Problem 1

#include <iostream>

using namespace std;

int calculateSum(int a, int b){
    return a+ b;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << calculateSum(a, b) << endl;
    return 0;
}