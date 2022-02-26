#include <iostream>
#include <cmath>
#include <cstdint>

int main(){
    uintmax_t games;
    std::cin >> games;
    for(uintmax_t itr = 0; itr < games; ++itr){
        uintmax_t finalStep;
        std::cin >> finalStep;
        double decimal;
        uint32_t integer;
        decimal = (sqrt(8 * finalStep + 1) - 1)/2;
        integer = decimal;
        if (integer == decimal)
            std::cout << "Go On Bob " << integer << "\n";
        else
            std::cout<< "Better Luck Next Time \n";
        }
}