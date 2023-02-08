#include <iostream>
#include <string>

int main() {
    size_t task_count;
    std::cin >> task_count;
    int64_t m, n = 0;
    std::string left, right;
    size_t count = 0;
    for(size_t i = 0; i < task_count; ++i) {
        count = 0;
        std::cin >> m >> n;
        std::cin >> left >> right;

        auto left_it = left.rbegin();
        auto right_it = right.rbegin();
        for(; left_it != left.rend() && right_it != right.rend();) {
            if(*left_it != *right_it) {
                break;
            }
            ++count;
            ++left_it;
            ++right_it;
        }
        std::cout << count << "\n";
    }
}