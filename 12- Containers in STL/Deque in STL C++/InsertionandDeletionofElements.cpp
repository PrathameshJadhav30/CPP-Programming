#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque; // Specify the type of deque

    myDeque.push_back(10);    // Insert 10 at the end
    myDeque.push_front(5);    // Insert 5 at the beginning

    myDeque.pop_back();       // Remove the last element
    myDeque.pop_front();      // Remove the first element

    return 0;
}
