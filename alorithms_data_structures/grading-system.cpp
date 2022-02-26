#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(auto i = 0; i < n; ++i){
        int grade;
        std::cin >> grade;
        if(grade < 38 || (grade % 5) < 3) std::cout << grade << std::endl;       
        else std::cout << grade + (5 - (grade % 5)) << std::endl;
    }
    return 0;
}