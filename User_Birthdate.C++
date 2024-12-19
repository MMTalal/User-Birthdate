#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to avoid writing std:: before cout

int main() 
{
    // Prompt the user to input their first character (e.g., the initial of their name)
    cout << "Input your first character: ";
    char firstCharacter;  // Variable to store the first character
    cin >> firstCharacter;  // Read the character input from the user

    // Prompt the user to input the day of their birth
    cout << "Input your birth day (01-31): ";
    int birthDay;  // Variable to store the birth day
    cin >> birthDay;  // Read the birth day input from the user

    // Prompt the user to input the month of their birth
    cout << "Input your birth month (01-12): ";
    int birthMonth;  // Variable to store the birth month
    cin >> birthMonth;  // Read the birth month input from the user

    // Prompt the user to input the year of their birth
    cout << "Input your birth year (e.g., 2000): ";
    int birthYear;  // Variable to store the birth year
    cin >> birthYear;  // Read the birth year input from the user

    // Display a summary of all inputs collected from the user
    cout << "\nSummary of your input:\n";
    cout << "First character: " << firstCharacter << endl;  // Output the first character
    cout << "Birth day: " << birthDay << endl;             // Output the birth day
    cout << "Birth month: " << birthMonth << endl;         // Output the birth month
    cout << "Birth year: " << birthYear << endl;           // Output the birth year

    // Personalize the greeting and display the full birth date in DD/MM/YYYY format
    cout << "\nHello, " << firstCharacter << "! Your birth date is: ";
    cout << birthDay << '/' << birthMonth << '/' << birthYear << endl;

    return 0;  // Indicate that the program executed successfully
}
