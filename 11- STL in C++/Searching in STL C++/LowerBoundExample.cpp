#include <iostream>
#include <vector>
#include <algorithm> // For sort and lower_bound

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 5, 5, 5, 6, 7};

    // Sort the vector (already sorted in this case, but for demonstration)
    std::sort(nums.begin(), nums.end());

    int target = 5;

    // Using lower_bound to find the first occurrence of the target
    auto lower = std::lower_bound(nums.begin(), nums.end(), target);

    if (lower != nums.end() && *lower == target) {
        std::cout << "Lower bound of " << target << " is at index: " 
                  << std::distance(nums.begin(), lower) << std::endl;
    } else {
        std::cout << target << " not found in the vector." << std::endl;
    }

    return 0;
}
