// Author: Maddison Kiefer
// 
// Program to convert feet and inches to centimeters
// This program will take an input from a user for the length in feet and inches and will convert it into
// centimeters. It uses exception handling to deal with negative numbers and non numeric values.

// Header files
#include <iostream>
#include <exception>
#include <string>
using namespace std;

// Main function
int main()
{
    // Defining variables
    string feet, inches; 
    int totalInches;
    double centimeter = 0;
    
    // While loop to ask for inputs multiple times
    while (centimeter == 0)
    {
        // Asks for inputs and assigns them to variables
        cout << "Enter a lenth in feet: ";
        cin >> feet;
        cout << "Enter the remaining length in inches; ";
        cin >> inches;

        // Try block
        try
        {
            // If feet or inches are less than zero it will throw an exception
            if (stoi(feet) < 0 || stoi(inches) < 0)
                throw exception();

            // Calculation for converting feet to inches, then to centimeters
            totalInches = (stoi(feet) * 12) + stoi(inches);
            centimeter = totalInches * 2.54;

            // Prints the total length in centimeters
            cout << "The total length in centimeters is " << centimeter << endl;

        }
        // Catch block
        catch (...)
        {
            // Asks for a non-negative number if an exception is thrown
            cout << "Please enter a non-negative number." << endl;
        }

    }
    
}


