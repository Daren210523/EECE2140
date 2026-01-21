/* 
Assignment 02 - Problem 01
Student Name: Daren Xu
Date: 2026-1-22
Description: Secret Code Decoder
 */

#include <iostream>
using namespace std;

int main() {
    int choice;

    // A do...while loop
    do 
    {
        // Display Menu
        cout << "\n--- Secret Code Decoder ---" << endl;
        cout << "1. Decode a message" << endl;
        cout << "2. Help (Explain rules)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // Use switch to handle menu choice
        switch (choice) 
        {
            case 1: 
            {
                // Start of Decoding Logic
                int length;
                cout << "Enter the length of the secret sequence: ";
                cin >> length;

                /*
                Input validation using while loop; 
                if length is <= 0, keep asking until valid.
                */
                while (length <= 0) 
                {
                    cout << "Error: Length must be positive. Try again: ";
                    cin >> length;
                }

                cout << "Enter the " << length << " numbers (separated by space): ";

                // Loop exactly "length" times 
                for (int i = 0; i < length; i++) 
                {
                    int code;
                    cin >> code;

                    // Check bounds 1-26
                    if (code >= 1 && code <= 26) 
                    {
                        /*
                        Fix off-by-one error logic;
                        'A' + 0 = 'A', so we must use (code - 1)
                        */
                        char letter = static_cast<char>('A' + (code - 1));
                        cout << letter;
                    } 
                    else 
                    {
                        // Invalid codes become '?' 
                        cout << "?";
                    }
                }
                cout << endl; // Clean formatting after the message
                break;
            }
            case 2:
                // Help messages
                cout << "[Help] 1 = 'A', 26 = 'Z'. Any other number becomes '?'." << endl;
                break;
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                // Handle invalid menu choices
                cout << "Invalid option. Please try again." << endl;
        }

    } 
    while (choice != 0); // Continue until user picks 0

    return 0;
}