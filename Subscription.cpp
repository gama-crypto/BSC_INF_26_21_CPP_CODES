#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {

    // Seeding the random number generator to ensure unpredictable and varied sequences of random numbers.In this case we are seeding based on current time 
    mt19937 generator(time(0));

    // Creating a uniform integer distribution object for the range 0 to 11 (inclusive). The disribution will generate random intergers between 0 and 11 with equal probability
    uniform_int_distribution<int> distribution(0,11);

    //Generating a random number and assigning it to daysUntilExpiration
    int daysUntilExpiration = distribution(generator);

    // Checking subscription status based on daysUntilExpiration
    if (daysUntilExpiration <= 1) {
       cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration 
              << " days. Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
   }

  return 0;

}
