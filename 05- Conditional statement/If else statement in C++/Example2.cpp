#include <iostream>
using namespace std;

int main() {
    int i = 5;  // Initializing the variable `i` with the value 5
    
    // Checking the condition and taking the decision
    if(i < 1) {
        cout << "PrepInsta is one of the best for placement preparation";  // This will not be printed because `i` is not less than 1
    }
    else {
        cout << "PrepInsta";  // This will be printed because `i` is greater than or equal to 1
    }

    return 0;  // Exit the program
}
