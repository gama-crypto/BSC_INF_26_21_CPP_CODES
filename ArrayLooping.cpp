#include <iostream>
#include <string>
using namespace std;
int main() {
  // Declare and initialize the array of strings with proper spacing
  const string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B17"};

  // Iterate through each element using a ranged for loop
  for (const string& element : elements) {
    // Check if the element starts with the letter using element.at(i); where is index starting from 0
    if (element.at(0) == 'B') {
      // Output the element with a descriptive message
      cout<< " " << element << endl;
    }
  }

  return 0;
}
