#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> height(N);
    for(int arr_i = 0;arr_i < N;arr_i++){
       cin >> height[arr_i];
    }
    int mx = *max_element(height.begin(), height.end());
    while(mx > 0) {
        int mn = mx;
        int cuts = 0;

        for(int i = 0; i < (int)N; ++i) {
            if(height[i] > 0)
                mn = min(mn, height[i]);
        }
        for(int i = 0; i < (int)N; ++i) {
            if(height[i] > 0) {
                cuts++;
                height[i] -= mn;
            }
        }

        cout << cuts << "\n";
        mx = *max_element(height.begin(), height.end());
    }

    return 0;
}
