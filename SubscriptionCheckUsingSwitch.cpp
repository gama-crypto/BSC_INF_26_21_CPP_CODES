#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main (){

    // Seeding the random number generator to ensure unpredictable and varied sequences of random numbers.In this case we are seeding based on current time 
    mt19937 generator(time(0));

    // Creating a uniform integer distribution object for the range 0 to 11 (inclusive). The disribution will generate random intergers between 0 and 11 with equal probability
    uniform_int_distribution<int> distribution(0,11);

    //Generating a random number and assigning it to daysUntilExpiration
    int daysUntilExpiration = distribution(generator);

    // Checking subscription status based on daysUntilExpiration
    switch (daysUntilExpiration){
        case 0:
        case -1: // Handling potential nagative value (exception)
         cout <<"Your subscription has expired." << endl;
         break;
        case 1:
         cout <<"Your subscription expires within a day!" << endl;
         cout <<"Renew now and save 20%!" << endl;
         break;
        case 2: 
    case 3:
    case 4:
    case 5:
      cout << "Subscription expires in " << daysUntilExpiration << " days. Save 10%!" << endl;
      break;
    default:
      cout << (daysUntilExpiration <= 10 ? "Subscription will expire soon. Renew now!" : "You have an active subscription.") << endl;
  }

  return 0;
}
