#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    myDeque.push_back(10);  // Add 10 to the back of the deque
    myDeque.push_back(20);  // Add 20 to the back of the deque
    myDeque.push_front(5);  // Add 5 to the front of the deque

    std::cout << "Front element: " << myDeque.front() << std::endl; // Access the front element (5)
    std::cout << "Back element: " << myDeque.back() << std::endl;   // Access the back element (20)

    return 0;
}
