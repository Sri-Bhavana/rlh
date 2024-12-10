#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::vector<int> filteredNumbers;

    // Filter out even numbers and store the result in a new vector
    auto filteredIt = std::remove_if(numbers.begin(), numbers.end(), isEven);
    filteredNumbers.insert(filteredNumbers.end(), filteredIt, numbers.end());

    // Shrink the original vector to remove the erased elements (optional)
    numbers.erase(filteredIt, numbers.end());

    // Display the original vector (with even numbers removed)
    std::cout << "Original vector: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Display the filtered vector (containing only odd numbers)
    std::cout << "Filtered vector: ";
    for (const int& num : filteredNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}