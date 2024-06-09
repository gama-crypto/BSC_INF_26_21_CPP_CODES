#include <iostream>

using namespace std;

void swap(int* varA, int* varB);// Function prototype

int main(){
    int varA = 25;
int varB = 100;
cout << " The interger value of varA before swapping: " << varA << endl; //varA is 25
cout << " The integer value of varB before swapping: " << varB << endl; //varB is 100
swap(varA, varB);
cout << " The integer value of varA after swapping: " << varA << endl; //varA is 100
cout << " The integer value of varB after swapping: " << varB << endl; //varB is 25
return 0;
}

// Function definition
void swap(int* varA, int* varB){
    
    int tempVariable = *varA;
    *varA = *varB;
    *varB = tempVariable;
}