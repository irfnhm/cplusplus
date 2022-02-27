/* Two programmers who were once colleagues and liked to throw puzzles at each other, meet after several years. Keeping in the spirit of problem-solving challenges, Programmer 1 challenges Programmer 2 to guess the age of his 3 children and gives Programmer 2 the first clue that the product of age of his three children is 36. Programmer 2 requests another clue and Prog 1 provides the sum of the children's ages. Programmer 2 is still unable to determine the ages and requests one last clue. Programmer 1, feeling pity, says that the the oldest child plays cricket. This time Programmer 1 is able to finally guess the correct age of all the 3 children. */

#include <iostream>
#include <vector>
#include <algorithm>

//find the factors
template <typename T> 
const std::vector <T> findFactors(const T ageProduct){
	std::vector <uintmax_t> factors;
	for (uintmax_t idx = 1; idx <= ageProduct; ++idx) {
		if (ageProduct % idx == 0) {
			factors.push_back(idx);
		}
	}
	return factors;
}

//find the age of all the three kids
template <typename T>
const std::vector <T> findAges(const std::vector <T> factors){
	std::vector <T> Ages;
	uintmax_t ageChild1(0), ageChild2(0), elder(0);
	for (uintmax_t i = 0; i < factors.size(); ++i) {
		for (uintmax_t j = 0; j < factors.size(); ++j) {
			for (uintmax_t k = 0; k < factors.size(); ++k) {
				if (i * j * k == 36 && i + j + k == 13) {
					if (i > j && i > k) { 
						elder = i; 
						ageChild1 = j;
						ageChild2 = k;
					}
					else if (j > i && j > k) {
						elder = j;
						ageChild1 = i;
						ageChild2 = k;
					}
					else if (k > i && k > j) {
						elder = k;
						ageChild1 = i;
						ageChild2 = j;
					}
					Ages.push_back(ageChild1);
					Ages.push_back(ageChild2);
					Ages.push_back(elder);
				}
			}
		}
	}
	return Ages;
}

int main()
{
	const uintmax_t ageProduct(36);
	std::vector<uintmax_t> finalAges;
	finalAges = findAges(findFactors(ageProduct));
	for (auto i : finalAges) {
		std::cout << i << "\n";
	}
	system("pause");
    return 0;
}
