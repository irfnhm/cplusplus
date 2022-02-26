#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <long int> v;
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	v.push_back(b + c + d + e);
	v.push_back(a + c + d + e);
	v.push_back(a + b + d + e);
	v.push_back(a + b + c + e);
	v.push_back(a + b + c + d);
	sort(v.begin(), v.end());
	long int min = v[0];
	long int max = v[4];
	cout << min << " " << max << endl;
	return 0;
}