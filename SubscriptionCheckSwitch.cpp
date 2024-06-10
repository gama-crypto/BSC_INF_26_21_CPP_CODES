#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    // Seeding the random number generator based on current time
    mt19937 generator(time(0));

    // Creating a uniform integer distribution object for the range 0 to 11 (inclusive)
    uniform_int_distribution<int> distribution(0, 11);

    // Generating a random number and assign it to daysUntilExpiration
    int daysUntilExpiration = distribution(generator);

    // Checking subscription status based on daysUntilExpiration using a switch statement
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}
