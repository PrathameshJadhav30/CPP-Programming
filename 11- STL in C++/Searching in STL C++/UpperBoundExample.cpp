#include <iostream>
#include <vector>
#include <algorithm> // For sort and upper_bound

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 5, 5, 5, 6, 7};

    // Sort the vector (already sorted in this case, but sorting for safety)
    std::sort(nums.begin(), nums.end());

    int target = 5;

    // Using upper_bound to find the first element greater than the target
    auto upper = std::upper_bound(nums.begin(), nums.end(), target);

    if (upper != nums.end()) {
        std::cout << "Upper bound of " << target << " is at index: "
                  << std::distance(nums.begin(), upper) << std::endl;
    } else {
        std::cout << "There is no element greater than " << target << " in the vector." << std::endl;
    }

    return 0;
}
