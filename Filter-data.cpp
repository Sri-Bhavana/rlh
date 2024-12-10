#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::vector<int> filteredNumbers;

    // Filter out even numbers using std::copy_if and lambda
    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(filteredNumbers), [](int num) {
        return num % 2 != 0;
        });

    // Display the filtered vector
    std::cout << "Filtered vector: ";
    for (const int& num : filteredNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}