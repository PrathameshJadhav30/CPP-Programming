#include <stdio.h>

// Function that takes a void* argument and prints the value it points to
void print_value(void* p) {
  
  // Must cast void* to a pointer of a specific type before dereferencing
  int* q = (int*)p;
  printf("%d\n", *q);
}

int main() {
    
  int x = 10;
  // Assign address of x to a void* pointer
  
  void* p = &x;
  // Pass void* pointer to function as argument
  
  print_value(p);  
  return 0;
}