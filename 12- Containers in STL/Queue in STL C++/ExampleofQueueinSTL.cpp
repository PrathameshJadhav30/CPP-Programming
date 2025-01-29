#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> qq;  // Define a queue of integers

    // Inserting elements into the queue
    qq.push(1);
    qq.push(2);
    qq.push(3);
    qq.push(5);

    // Display the size of the queue
    cout << "The size of the queue: " << qq.size() << endl;

    // Remove an element from the front of the queue
    qq.pop();

    // Displaying queue elements
    cout << "The elements in the queue: ";
    while (!qq.empty()) {
        cout << qq.front() << " ";
        qq.pop();
    }
    cout << endl;

    // Display the size of the queue after removing elements
    cout << "The size of the queue: " << qq.size() << endl;

    // Check if the queue is empty
    if (qq.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
