#include <iostream>
#include <string>
using namespace std;
int main() {
  // Dynamically allocating an integer and a string
  int* dynamicInt = new int;
  string* dynamicString = new string;
  // Prompting a user for integer input
  cout << "Enter an integer value: ";
 // Getting an integer input from the input stream
  cin >> *dynamicInt;
  //Prompting a user for a string input
  cout << "Enter a string value: ";

  //Discarding the newline character(\n) in the buffer
  //The subsequent getline() call will read the actual string, not just an empty line
  cin.ignore(); 
  getline(cin, *dynamicString);// Reading string value enterred by the user and storing in a dynamically allocated string variable, including whitespaces and punctuations

  // Outputting the values
  cout << "Dynamically allocated integer value is: " << *dynamicInt << endl;
  cout << "Dynamically allocated string value is: " << *dynamicString << endl;

  // Deallocating memory by preceding the variables with delete keyword
  delete dynamicInt;
  delete dynamicString;

  return 0;
}