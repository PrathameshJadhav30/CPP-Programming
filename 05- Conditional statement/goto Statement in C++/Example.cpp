#include<iostream>
using namespace std;

int main ()
{
  int k = 12;  // Initialize 'k' to 12

  // Label for 'goto' to jump to this point
  LOOP:
  do
  {
    // Check if 'k' is equal to 14
    if (k == 14)
    {
      k = k + 1;  // Increment 'k' by 1 to avoid infinite loop
      goto LOOP;  // Jump to the 'LOOP' label, restarting the loop
    }

    // Print the current value of 'k'
    printf("value of k: %d\n", k);

    // Increment 'k' by 1
    k++;

  }
  while (k < 25);  // Continue the loop while 'k' is less than 25

  return 0;  // Exit the program
}
