#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int getDigits(long long int N) {
	vector <int> dig;
	int count = 0;
	int remainder = 0;
    int M = N;
	while (M != 0)
	{
		remainder = M % 10;
		//dig.push_back(remainder);
		M /= 10;
        if (remainder != 0 && (N % remainder) == 0) {
			count++;
		}
	}
	
	return count;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int N;
        cin >> N;
        cout << getDigits(N) << endl;
    }
    return 0;
}
