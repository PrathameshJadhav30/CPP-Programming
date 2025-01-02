#include <fstream>  // For file stream operations
#include <iostream> // For standard I/O
#include <string>   // For string operations

using namespace std;

int main() {
    // Declare a file stream object
    fstream file;

    // Open a file in write mode (ios::out)
    file.open("cout.txt", ios::out);

    // Check if the file opened successfully
    if (!file.is_open()) {
        cerr << "Error: Unable to open the file." << endl;
        return 1; // Exit the program with an error code
    }

    // Declare a string variable
    string line;

    // Save the original buffer of cout and cin
    streambuf *stream_buffer_cout = cout.rdbuf();
    streambuf *stream_buffer_cin = cin.rdbuf();

    // Redirect cout to the file's buffer
    streambuf *stream_buffer_file = file.rdbuf();
    cout.rdbuf(stream_buffer_file);

    // Write a line to the file
    cout << "This line is written to the file" << endl;

    // Restore the original cout buffer
    cout.rdbuf(stream_buffer_cout);

    // Write a line to the console
    cout << "This line is written to the screen" << endl;

    // Close the file
    file.close();

    return 0; // Exit the program successfully
}
