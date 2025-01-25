#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    myDeque.push_back(10); // Add 10 to the deque
    myDeque.push_back(20); // Add 20 to the deque
    myDeque.push_back(30); // Add 30 to the deque

    int elementAtIndex1 = myDeque[1]; // Access the element at index 1 (20)
    int elementAtIndex2 = myDeque.at(2); // Access the element at index 2 (30)

    // Optional: Print the accessed elements
    std::cout << "Element at index 1: " << elementAtIndex1 << std::endl;
    std::cout << "Element at index 2: " << elementAtIndex2 << std::endl;

    return 0;
}
