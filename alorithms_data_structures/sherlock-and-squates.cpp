#include <cmath>
#include <iostream>

using namespace std;

int main() {   
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i){
        int A, B;
        int count = 0;
        cin >> A >> B;
        cout << floor(sqrt(B)) - ceil(sqrt(A)) + 1 << endl;
    }
    return 0;
}
