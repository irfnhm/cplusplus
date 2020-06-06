#include <iostream>
#include <vector>

enum class BattleSignal{
    red, yellow, green
};

void show(const int &n){
    std::cout << "-" << n;
}

int main(){
    std::vector<int> nums{3, 4, 2, 8, 15, 267};
    std::for_each(nums.begin(), nums.end(), std::bind(&show, std::placeholders::_1));
    std::cout << std::endl;
    std::for_each(nums.begin(), nums.end(), [](const int &n) {std::cout << "-" << n;});
    std::cout << std::endl;

    auto _lambda = [](const int &n){std::cout << "*" << n;};
    std::for_each(nums.begin(), nums.end(), _lambda);
    std::cout << std::endl;

    auto currentSignal = BattleSignal::green;
    const auto sheildLevel = [&](){
        switch (currentSignal) {
            case BattleSignal::green:
                return 50;
            case BattleSignal::yellow:
                return 700;
            case BattleSignal::red:
            default:
                return 1000;
        }
    }();
    std::cout << "Current sheild level = " << sheildLevel << std::endl;
}
