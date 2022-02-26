//Algorithms - Problem 3

#include <iostream>

using namespace std;

int main(){
    int a, b, c, x, y, z;
    int alice = 0, bob = 0;
    cin >> a >> b >> c; //triplets in Alice
    cin >> x >> y >> z; //triplets in Bob
    if (a > x) alice++;
    else if(a < x) bob++;
    if (b > y) alice++;
    else if (b < y) bob++;
    if(c > z) alice++;
    else if (c < z) bob++;
    cout << alice << " " << bob << endl;
    return 0;
}