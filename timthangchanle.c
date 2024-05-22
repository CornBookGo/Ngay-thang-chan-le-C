#include <iostream.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int month;
    cout << "Enter a month (1-12): ";
    cin >> month;

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month has 31 days." << endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This month has 30 days." << endl;
            break;

        case 2:
            int year;
            cout << "Enter a year: ";
            cin >> year;

            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                cout << "This month has 29 days." << endl;
            else
                cout << "This month has 28 days." << endl;
            break;

        default:
            cout << "Invalid input." << endl;
            break;
    }

    return 0;
}
