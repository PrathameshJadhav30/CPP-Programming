#include <iostream>
#include <map>
#include <string> // For std::string

int main() {
    std::map<std::string, int> ages;
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    std::cout << "Charlie's age: " << ages["Charlie"] << std::endl;

    return 0;
}
