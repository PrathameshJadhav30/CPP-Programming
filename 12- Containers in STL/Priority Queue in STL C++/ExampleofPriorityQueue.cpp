#include <iostream>
#include <queue>  

using namespace std;

int main() {
    priority_queue<int> pq;

    // Inserting elements into the priority queue
    pq.push(34);
    pq.push(20);
    pq.push(4);
    pq.push(1);
    pq.push(50);

    // Displaying the top element
    cout << "The top element of the priority queue: " << pq.top() << endl;

    // Removing the top element
    pq.pop();
    cout << "The top element after removing one element: " << pq.top() << endl;

    return 0;
}
