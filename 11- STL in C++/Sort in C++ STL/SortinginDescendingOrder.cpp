#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main() {
    std::vector<int> arr; // Specify the type as int
    arr.push_back(34);
    arr.push_back(70);
    arr.push_back(20);
    arr.push_back(56);
    arr.push_back(1);
    
    std::cout << "The elements of the array before sorting: ";
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Sort function to sort the elements
    std::sort(arr.begin(), arr.end());   
    std::cout << "The elements of the array after sorting: ";
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
   
    return 0;
}
