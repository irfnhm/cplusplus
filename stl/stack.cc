#include <iostream>
#include <stack>

int main() {
    std::stack<int> st;
    for(int  i = 0; i < 10; ++i) {
        st.push(i);
    }
    std::cout << "Current stack size: " << st.size() << std::endl;
    std::cout << "Pop contents out: " << std::endl;
    while(!st.empty()) {
        std::cout << st.top() << std::endl;
        st.pop();
    }
}
