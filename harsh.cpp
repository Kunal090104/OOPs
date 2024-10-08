#include <iostream>
using namespace std;

enum Days {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main () {  
    enum Days today;
    today = Sunday;
    switch (today) {
        case 0:
        cout << "Monday";
        break;
        case 1:
        cout << "Tuesday";
        break;
        case 2: 
        cout << "Wednesday";
        break;
        default: 
        cout << "Invalid";
        break;
    }
    return 0;
}