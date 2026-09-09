#include <iostream> //Loads the input/output library so cout and cin become available.
#include <string> //Lets us use words
using namespace std; //Removes the need to type std:: in front of standard library names.

int main() { //Defines the single entry point where your program starts executing.
    string name; //Stores text, like a name
    int age; //Stores a whole number

    cout << "Enter your name: "; //Asks the user to enter their name.
    cin >> name; //Saves the name the user enters.

    cout << "Enter your age: "; //Asks the user to enter their age.
    cin >> age; //Saves the age the user enters.

    cout << "Hello, I am " << name << "! I am " << age << " years old." << endl; //Prints a greeting with the user's name and age.

    return 0; //Ends the program successfully.
}
