// Lab7-3.cpp - calculates the average number of text
// messages sent each day for 7 days
// Created/revised by Elijah Flanagan on 11/05/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    int day = 1;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;

    while (day <= 7) // Loop for 7 days
    {
        cout << "How many text messages did you send on day " << day << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day += 1;
    } // end while

    average = static_cast<double>(totalTexts) / 7;  // Calculate average based on 7 days
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately " << average << " text messages per day." << endl;

    return 0;
}   // end of main function
