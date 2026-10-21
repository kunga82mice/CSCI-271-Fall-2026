//Kunga Gurung
//Assignment 5
#include <iostream> //Lets us use cout and cin
using namespace std; //So we dont have to type std::
int main() { //Starts the program
    const int SIZE=10; //Sets the array size to 10
    int data[SIZE]={7,12,5,12,40,3,12,8,21,5}; //Stores 10 numbers in the array
    int target; //Stores the number user wants to search
    int foundIndex=-1; //Starts at -1 meaning not found
    int count=0; //Counts how many times the number appears
    cout << "Enter a number to search for: "; //Ask user for a number
    cin >> target; //Stores the number

    for (int i=0; i<SIZE; i++) { //Checks all numbers in the array
        if (data[i] == target) { //Checks if the number matches target
            count++; //Adds 1 every time target is found
            if (foundIndex == -1) { //Checks if this is the first match
                foundIndex = i; } //Stores the first index
        }
    }
    if (foundIndex != -1) { //Checks if target was found
        cout << target << " first found at index " << foundIndex << endl; //Shows first index
        cout << target << " appears " << count << " time(s)" << endl; } //Shows how many times it appears
    else { //Runs if target was not found
        cout << target << " was not found." << endl; } //Shows not found message
    return 0; //Ends the program
}
