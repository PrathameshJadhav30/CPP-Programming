#include <iostream>
using namespace std;

int main() {
    int i = 100;

    // loop that will terminate after 10 iterations
    while(i > 10) {
        cout << i << " ";
        i--;  // Decrement `i` to eventually make the condition false
    }

    return 0;  // Exit the program
}
