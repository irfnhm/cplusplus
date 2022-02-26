#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int money;
        int cost;
        int wcost;
        cin >> money >> cost >> wcost;
        int chocs = money / cost;
        int wraps = chocs;
        while(wraps >= wcost){
            chocs++;
            wraps = wraps - wcost;
            wraps += 1;
        }
        cout << chocs << endl;
    }
    return 0;
}
