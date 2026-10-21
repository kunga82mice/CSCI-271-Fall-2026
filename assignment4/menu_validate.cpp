//Kunga Gurung

#include <iostream> //Lets us use cout and cin.
using namespace std; //Removes the need to type std:: in front of standard library names.

int main() { //Starts the main part of the program.
    int choice; //Stores the number the user enters.

    do { //Starts the loop and runs it at least once.
        cout << "Enter a menu choice (1, 2, or 3): "; //Asks the user to enter a choice.
        cin >> choice; //Saves the choice the user enters.
        if (choice != 1 && choice != 2 && choice != 3) { //Checks if the choice is not 1, 2, or 3.
            cout << "Invalid choice, try again." << endl; //Tells the user the choice is not valid.
        } 
    } while (choice != 1 && choice != 2 && choice != 3); //Repeats until the user enters 1, 2, or 3.
    cout << "You selected option " << choice << "." << endl; //Prints the option the user selected.
    return 0; //Ends the program successfully.
} 
