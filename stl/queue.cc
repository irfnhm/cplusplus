#include <iostream>
#include <queue>

int main() {
    std::queue<int> que;
    for(int i  = 0; i < 100; ++i ){
        que.push(i);
    }

    std::cout << "Current queue size: " << que.size() << std::endl; // Total queue size
    std::cout << std::endl << que.front(); // First element
    std::cout << std::endl << que.back(); // Last element

    std::cout << std::endl << "Queue: ";
    while(!que.empty()) {
        std::cout << que.front() << " ";
        que.pop();
    }
}
