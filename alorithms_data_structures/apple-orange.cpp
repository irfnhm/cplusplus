#include <iostream>
#include <vector>

using namespace std;

int main(){
    int s, t, a, b, m, n, i, apples = 0, oranges = 0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    vector <int> apple(m);
    for(i = 0; i < m; i++){
       cin >> apple[i];
        if((apple[i] >= (s-a)) && (apple[i] <= (t-a)))
            apples++;
    }
    vector<int> orange(n);
    for(i = 0; i < n; i++){
       cin >> orange[i];
        orange[i]=(-1*orange[i]);
        if((orange[i] >= (b-t)) && (orange[i] <= (b-s)))
           oranges++;
    }
        cout<< apples << endl << oranges;
    return 0;
}