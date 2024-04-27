#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  int rows, cols;

  // Prompt user for dimensions
  cout << "Enter number of rows (max 3): ";
  cin >> rows;
  cout << "Enter number of columns (max 3): ";
  cin >> cols;

  // Enforce dimension limits
  if (rows > 3 || cols > 3) {
    cerr << "Oops! Dimensions must not exceed 3." << std::endl;
    return 1;
  }

  // Dynamically allocate 2D array
  double** dynamicArray = new double*[rows];
  for (int i = 0; i < rows; ++i) {
    dynamicArray[i] = new double[cols];
  }
  srand(time(0));//Seeding random generator with current time
  // Assign values using nested loops
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      dynamicArray[i][j] = rand() % 10; // Assign random values between 0 and 9 
    }
  }

  // Output values
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      std::cout << dynamicArray[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // Deallocate memory
  for (int i = 0; i < rows; ++i) {
    delete[] dynamicArray[i];
  }
  delete[] dynamicArray;

  return 0;
}
