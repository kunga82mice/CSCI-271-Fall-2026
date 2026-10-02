//Kunga Gurung

#include <iostream> //Lets us use cout and cin
using namespace std; //Removes the need to type std:: in front of standard library names.

int main() { //Starts the main part of the program.
    int number; //Stores the number the user enters.

    cout << "Enter a number: "; //Ask the user to enter a number.
    cin >> number; //Saves the number the user enters
    for (int i = 1; i <= 10; i++) { //Uses the numbers 1 to 10 for multiplication.
        cout << number << " x " << i << " = " << number * i << endl; //Shows the multiplication result.
    }
    return 0; //Ends the program successfully.
}
