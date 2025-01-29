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

    // Displaying queue elements
    cout << "The elements in the queue: ";
    while (!qq.empty()) {
        cout << qq.front() << " ";
        qq.pop();
    }
    cout << endl;

    return 0;
}
