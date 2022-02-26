//Algorithms - Problem 7

#include <iostream>

using namespace std;

int main(){
    int n, hash = 0, space = 0;
    cin >> n;
    for(unsigned int i = 1; i <= n; ++i){
        space = n - i;
        hash = n - space;
        for(unsigned int k = 1; k <= space; ++k){
            cout << " ";
        }
        for(unsigned int j = 1; j <= hash; ++j){
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}