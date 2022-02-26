#include <iostream>
#include <vector>

template<typename T> 
T findElement(std::vector<T> vec, T num) {
	//implement linear search
	T status = false;
	for (int i = 0; i < vec.size(); ++i) {
		if (vec.at(i) == num) {
			status = true;
		}
	}
	return status;
}

int main() {
	std::vector<int> vec;
	vec = {1, 2, 3, 4, 5};
	bool status = findElement(vec, 7);
	std::cout << "Found " << status << std::endl;
}