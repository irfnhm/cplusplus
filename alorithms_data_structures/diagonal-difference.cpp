//Algorithms - Problem 5

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    
    int n, p_sum, s_sum, abs_dif;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(unsigned int a_i = 0; a_i < n; a_i++){
       for(unsigned int a_j = 0; a_j < n; a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for( unsigned int a_i = 0; a_i < n; a_i++){
           p_sum += a[a_i][a_i];
           s_sum += a[a_i][n - 1 - a_i];
    }
    abs_dif = abs(p_sum - s_sum);
    cout << abs_dif << endl;
    return 0;
}