#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <sstream> // Include necessary library

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    // Loop through each character in the string
    for (char c : str) {
        // Check if the character is a vowel (ignoring case)
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++; // Increment the vowel count
        }
    }
    return count; // Return the total vowel count
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    // Use a string stream to split the string into words
    istringstream iss(str);
    string word;
    while (iss >> word) {
        count++; // Increment the word count
    }
    return count; // Return the total word count
}

// Function to reverse a string
string reverseString(string str) {
    // Use the std::reverse algorithm to reverse the string in place
    reverse(str.begin(), str.end());
    return str;
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(string str) {
    bool capitalize = false; // Flag to track whether to capitalize the next letter
    // Loop through each character in the string
    for (char& c : str) {
        // Check if the character is a letter
        if (isalpha(c)) {
            // Check if it's time to capitalize the next letter
            if (capitalize) {
                c = toupper(c); // Capitalize the letter
                capitalize = false; // Reset the flag
            } else {
                capitalize = true; // Set the flag for the next letter
            }
        } else {
            capitalize = false; // Reset the flag if the character is not a letter
        }
    }
    return str;
}

int main() {
    // Open the input file
    ifstream inputFile("text_file.txt"); 
    // Assuming "text_file.txt" contains "This is the Advanced Computer Programming Module"
    if (!inputFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1; // Exit with an error code
    }

    string fileData;
    // Read the entire file into a string
    getline(inputFile, fileData);

    inputFile.close(); // Close the file

    // Count vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // Count words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    // Reverse the string
    string reversed = reverseString(fileData);
    cout << "Reversed string: " << reversed << endl;

    // Capitalize the second letter of each word
    string capitalized = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letter: " << capitalized << endl;

    return 0; // Exit successfully
}