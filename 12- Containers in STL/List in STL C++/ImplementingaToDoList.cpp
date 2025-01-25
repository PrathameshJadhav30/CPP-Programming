#include <iostream>
#include <list>
#include <string> // Required for std::string

int main() {
    std::list<std::string> todoList; // Specify the type as std::string
    todoList.push_back("Finish report");
    todoList.push_back("Buy groceries");
    todoList.push_back("Go to the gym");

    // Print the tasks in the to-do list
    for (const auto& task : todoList) {
        std::cout << task << std::endl;
    }

    return 0;
}
