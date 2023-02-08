#include <iostream>

int main() {
    size_t task_count;
    std::cin >> task_count;

    int64_t value = 0;
    for(size_t i = 0; i < task_count; ++i) {
        std::cin >> value;
        if(value == 0) {
            std::cout << value << "\n";
        } else {
            std::cout << value - 1 << "\n";
        }
    }
}
