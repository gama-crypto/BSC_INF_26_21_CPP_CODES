#include <iostream>
#include <limits> 
using namespace std;

int main() {
// Declaration of a variable that holds the User Input
  int userInput;

// Looping indefinitely until a valid input to be validated is received
  while (true) {
// Prompting a user to enter integers between 5 and 10 (Inclusive)
    cout << "Enter an integer between 5 and 10: ";
// Checks if the input read from console can be converted into the declared built-in type, say integer in this case.
    if (!(cin >> userInput)) {
// Rejecting non-numeric values that a user may supply
    cout << "Invalid input. Please enter a valid integer." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }
// Accepts integers between 5 and 10, including 5 and 10
    if (userInput < 5 || userInput > 10) {
      cout << "Input value must be between 5 and 10. Please try again." << endl;
      continue;
    }
// Checking if the next character in the input buffer is not strictly an integer and not a newline character.
    if (cin.peek() != '\n') {
      cout << "Invalid input. Please enter an integer, not a floating-point number!" << endl;
 // Resetting the input stream and allowing the user to try again i.e. Clears error state that resulted from failed input operations 
      cin.clear();
// Clearing the input buffer so that it can repopulate subsequent inputs.
//This line ignores characters in the input buffer until a newline character ('\n') is encountered or the maximum number of characters is reached.
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
// The continue statement is used to skip the rest of the code inside a loop (such as a for or while loop) and move on to the next iteration
      continue;
    }
// Exiting the current loop or switch statement and moves on to the next part of the code.
    break;
  }

  cout << "Your input value " << userInput << " has been accepted." << endl;

  return 0;
}