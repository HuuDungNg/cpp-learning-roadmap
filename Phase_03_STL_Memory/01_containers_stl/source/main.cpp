#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> counts;
    counts["apple"] = 2;
    counts["banana"] = 3;

    for (const auto &item : counts) {
        std::cout << item.first << ": " << item.second << '\n';
    }
    return 0;
}
