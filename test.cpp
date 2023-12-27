#include <iostream>
#include <vector>
#include <algorithm>

// Custom comparator function to compare two strings
bool compareStrings(const std::string& str1, const std::string& str2) {
    return str1 < str2; // Change the comparison logic as needed
}

int main() {
    // Create a 2D vector of strings
    std::vector<std::vector<std::string>> string2DVector = {
        {"banana", "apple", "orange"},
        {"grape", "pear", "kiwi"},
        {"cherry", "strawberry", "blueberry"}
    };

    // Sort each row in the 2D vector
    for (auto& row : string2DVector) {
        std::sort(row.begin(), row.end(), compareStrings);
    }

    // Print the sorted 2D vector
    for (const auto& row : string2DVector) {
        for (const auto& str : row) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
