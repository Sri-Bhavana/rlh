
#include <iostream>
#include <vector>
#include <algorithm>

class ComplexPredicate {
public:
    ComplexPredicate(int minValue, int maxValue) : min_(minValue), max_(maxValue) {}

    bool operator()(const int& num) const {
        // Complex filtering logic goes here
        return num % 2 != 0 && num >= min_ && num <= max_;
    }

private:
    int min_;
    int max_;
};

int main() {
    std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    std::vector<int> filteredData;

    ComplexPredicate predicate(3, 7);

    std::copy_if(data.begin(), data.end(), std::back_inserter(filteredData), predicate);

    std::cout << "Filtered data: ";
    for (int num : filteredData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
