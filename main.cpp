// Chapter 4, Programming Challenge 20: Speed of Sound
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for speeds
    const double AIR   = 1100;
    const double WATER = 4900;
    const double STEEL = 16400;

    // Constants for menu choices
    const int AIR_CHOICE   = 1;
    const int WATER_CHOICE = 2;
    const int STEEL_CHOICE = 3;

    int choice;         // To hold a menu choice
    double distance;    // To hold the distance
    double speed;        // To hold the speed
    double time;        // To hold the time

    // Display the menu and get a choice.
    cout << "Select a medium:\n"
         << "1. Air\n"
         << "2. Water\n"
         << "3. Steel\n\n"
         << "Enter your choice: ";
    cin  >> choice;

    // Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(4);

    // Respond to the user's menu selection.
    switch(choice)
    {
        case AIR_CHOICE:
            speed = AIR;
            cout << "Enter the distance: ";
            cin >> distance;

            // Validate the distance.
            if (distance > 0)
            {
            time = distance/speed;
            cout << "\nA sound wave takes "
                 << time << " seconds to travel "
                 << distance << " feet through air.\n";
            }
            else
                cout << "\nDistance must be greater than zero.\n";
            break;

        case WATER_CHOICE:
            speed = WATER;
            cout << "Enter the distance: ";
            cin >> distance;

            // Validate the distance.
            if (distance > 0)
            {
                time = distance / speed;
                cout << "\nA sound wave takes "
                     << time << " seconds to travel "
                     << distance << " feet through water.\n";
            }
            else
                cout << "\nDistance must be greater than zero.\n";
            break;

        case STEEL_CHOICE:
            speed = STEEL;
            cout << "Enter the distance: ";
            cin >> distance;

            // Validate the distance.
            if (distance > 0)
            {
                time = distance / speed;
                cout << "\nA sound wave takes "
                     << time << " seconds to travel "
                     << distance << " feet through steel.\n";
            }
            else
                cout << "\nDistance must be greater than zero.\n";
            break;

        default:
            cout << "\nThe valid choices are 1 through 3. Run the\n"
                 << "program again and select one of those.\n";
    }
    
    return 0;
}
