#include <iostream>
using namespace std;

int main() {
    int age = 4;          // Age variable
    string vote;          // Variable to store voting eligibility message

    // Using the ternary operator to check eligibility
    vote = (age >= 18) ? "Eligible" : "Not Eligible";

    // Output the result
    cout << vote << endl;

    return 0;
}
