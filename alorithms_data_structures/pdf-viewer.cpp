#include <iostream>
#include <vector>
#include <string>

#define SIZE 26
#define MAX -9999

int main() {
	std::vector <int> area;
	int elements;
	std::string word;
	for (unsigned int i = 0; i < SIZE; ++i) {
		std::cin >> elements;
		area.push_back(elements);
	}
	std::cin >> word;
	for(unsigned int i = 0; i < word.length(); ++i){
		if(area[(int(word[i]) - 97)] > MAX) MAX = area[int(word[i]) - 97];
	}
	std::cout << (word.length()) * 1 * MAX;
}
