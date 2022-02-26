#include <iostream>

using namespace std;

int main() {
    int n, k;
    int special = 0;
    int page = 1;
    cin >> n >> k;

    for (int x; cin >> x;){
        int problem = 1;
        int count = 1;
        while (problem <= x){
            if (count > k){
                page += 1;
                count = 1;
            }
            if (problem == page){
                special += 1;
            }
            problem += 1;
            count += 1;
        }
        page += 1;
    }

    cout << special << endl;
    return 0;
}
