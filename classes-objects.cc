//This code doesn't work on clang, use gcc.
#include <iostream>
#include <vector>
#include <numeric>

class Student {
    private:std::vector<int> scores;
    public:void input();
    public:int calculateTotalScore();
};

void Student::input(int count){
    while(count--){
        int score;
        std::cin >> score;
        scores.push_back(score);
    }
}
int Student::calculateTotalScore(){
    int sum = std::accumulate(scores.begin(), scores.end(), 0);
    return sum;
}

int main(){
    Student s;
    int count{0};
    std::cin >> count;
    s.input(count);
    std::cout << s.calculateTotalScore();
}