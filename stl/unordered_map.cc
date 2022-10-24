#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::string name;
    std::unordered_map<std::string, int> score_card = {
        {"irfan", 89},
        {"nida", 90},
        {"maddy", 91},
        {"urfi", 93}
    };
    
    // Print everything in the hashmap
    // for(const std::pair<std::string, int>& n: score_card) {
    //     std::cout << n.first << " " << n.second << std::endl;
    // }

    // Print by search
    auto search = score_card.find("irfan");
    if(search != score_card.end()) {
        std::cout << search->first << " : " << search->second << std::endl;
    } else {
        std::cout << "Record not found." << std::endl;
    }
    return 0;
}
