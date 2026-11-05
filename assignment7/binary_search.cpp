// Name: Kunga Gurung
#include <iostream> // Allows input and output
using namespace std; // Lets us use cin and cout
int main() { // Starts the program
    const int SIZE = 8; // Sets the array size to 8
    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88}; // Stores the numbers
    int target; // Stores the number to search for
    cout << "Enter a number to search for: "; // Asks the user for a number
    cin >> target; // Gets the number from the user
    int low = 0; // First index
    int high = SIZE - 1; // Last index
    int foundIndex = -1; // Means not found yet

    while (low <= high) { // Searches while the range is valid
        int mid = (low + high) / 2; // Finds the middle index
        if (arr[mid] == target) { // Checks if the number matches
            foundIndex = mid; // Saves the index
            break; } // Stops the loop
        else if (arr[mid] < target) { // Checks if target is bigger
            low = mid + 1; } // Moves to the right half
        else { // If target is smaller
            high = mid - 1; }// Moves to the left half
    }
    if (foundIndex != -1) { // If number was found
        cout << target << " found at index " << foundIndex << endl; } // Shows the index
    else { // If number was not found
        cout << target << " not found" << endl; } // Shows not found
    return 0; } // Ends the program
