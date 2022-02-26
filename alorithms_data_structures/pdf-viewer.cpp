#include <iostream>
#include <vector>
#include <string>
#define SIZE 26
#define MAX -9999

using namespace std;

int main() {
	vector <int> area;
	int elements;
	string word;
	for (unsigned int i = 0; i < SIZE; ++i) {
		cin >> elements;
		area.push_back(elements);
	}
	cin >> word;
	for(unsigned int i = 0; i < word.length(); ++i){
		if(area[(int(word[i]) - 97)] > MAX) MAX = area[int(word[i]) - 97];
	}
	cout << (word.length()) * 1 * MAX;
	return 0;
}