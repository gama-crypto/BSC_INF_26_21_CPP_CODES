#include <iostream>
using namespace std;

// Function declarations
double CalculateRectangleArea(double length, double width);
double CalculateTriangleArea(double base, double height);
double CalculateSquareArea(double length);

int main() {
    int choice;
    double area;

    while (true) {
        cout << "Select a shape to calculate the area for:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your pick (1-4): ";
        // Input validation: Check if input is an integer
        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number (1-4)." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(10000, '\n'); // Ignore the invalid input
            continue; // Go back to the beginning of the loop
          }

        if (choice == 1) {
            double base, height;
            cout << "Enter the base of the triangle in meters: ";
            cin >> base;
            cout << "Enter the height of the triangle in meters: ";
            cin >> height;
            area = CalculateTriangleArea(base, height);
            cout << "The area of the triangle is: " << area <<" sqaure meters" << endl;
        } else if (choice == 2) {
            double length, width;
            cout << "Enter the length of the rectangle in meters: ";
            cin >> length;
            cout << "Enter the width of the rectangle in meters: ";
            cin >> width;
            area = CalculateRectangleArea(length, width);
            cout << "The area of the rectangle is: " << area <<" square meters" <<endl;
        } else if (choice == 3) {
            double length;
            cout << "Enter the length of the square in meters: ";
            cin >> length;
            area = CalculateSquareArea(length);
            cout << "The area of the square is: " << area <<" square meters" <<endl;
        } else if (choice == 4) {
            break;
        } else {
            cout << "Your input was:"<< choice <<". which is an invalid input." <<endl<< "Please enter a valid input!!"<<endl;
        } 
    }

    return 0;
}

// Function definitions
double CalculateRectangleArea(double length, double width) {
    return length * width;
}

double CalculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double CalculateSquareArea(double length) {
    return length * length;
}