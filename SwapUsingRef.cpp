#include <iostream>

// Function prototype or blueprint
void swap(int& varA, int& varB);

// Where execution starts
int main() {
    
//Declaring and initializing the variables
  int varA = 25;
  int varB = 100;

  // Printing the values before the swap
  std::cout << "Before swapping:" << std::endl;
  std::cout << "The value of varA is : " << varA<< std::endl;
  std::cout << "The value of varB is: " << varB << std::endl;

  // Calling the swapper function to swap the values of varA and varB
  swap(varA, varB);

  // Printing after the swap
  std::cout << "After swapping:" << std::endl;
  std::cout << "The value of varA is: " << varA << std::endl;
  std::cout << "The value of varB is: " << varB << std::endl;

  return 0;
}

// Function definition
void swap(int& varA, int& varB) {
  int temp = varA;//Introducing a temporary variable to achieve swapping
  varA = varB;
  varB = temp;
}