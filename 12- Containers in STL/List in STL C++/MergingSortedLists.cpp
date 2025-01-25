#include <iostream>
#include <list>

int main() {
    // Initialize two sorted lists of integers
    std::list<int> list1 = {1, 3, 5};
    std::list<int> list2 = {2, 4, 6};

    // Merge list2 into list1
    list1.merge(list2);

    // Print the merged list
    for (const auto& num : list1) {
        std::cout << num << " ";
    }

    return 0;
}
