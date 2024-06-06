#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x = time(0); // Accesses system time
    srand(x); // Determines default seed value
    int daysUntilExpiration;
    
    daysUntilExpiration = rand() % 11 + 0; // Generate random numbers between 0 and 11

    switch(daysUntilExpiration) {
        case 0:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%" << endl;
            break;
        case 1:
            cout << "Subscription has expired" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
            cout << "Renew now and save 10%" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!! " << endl;
            break;
        default:
            cout << "You have an active subscription" << endl;
            break;
    }

    return 0;
}
