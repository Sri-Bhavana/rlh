#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7 };

    // Filtering using std::remove_if and std::erase
    auto it = std::remove_if(numbers.begin(), numbers.end(), [](int num) { return num % 2 == 0; });
    numbers.erase(it, numbers.end());

    // Output the filtered result
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}