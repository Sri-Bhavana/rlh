#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7 };

    // Filtering using std::copy_if and a lambda function
    std::vector<int> even_numbers;
    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(even_numbers), [](int num) { return num % 2 == 0; });

    // Output the filtered result
    std::cout << "Even numbers: ";
    for (int num : even_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}