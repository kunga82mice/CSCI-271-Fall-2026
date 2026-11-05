// Name: Kunga Gurung
#include <iostream> // Allows input and output
#include <vector> // Allows us to use vectors
using namespace std; // Lets us use cin and cout
int main() { // Starts the program
    vector<int> grades; // Creates an empty vector for grades
    int count; // Stores how many grades to enter
    int grade; // Stores each grade
    int sum = 0; // Stores the total
    int highest = 0; // Stores the highest grade
    cout << "How many grades? "; // Asks for the number of grades
    cin >> count; // Gets the number
    if (count <= 0) { // Checks if the count is valid
        cout << "Please enter at least one grade." << endl; // Shows an error message
        return 0; } // Ends the program

    for (int i = 0; i < count; i++) { // Repeats for each grade
        cout << "Enter grade " << i + 1 << ": "; // Asks for a grade
        cin >> grade; // Gets the grade
        grades.push_back(grade); // Adds grade to the vector
        sum += grade; // Adds grade to the total
        if (i == 0 || grade > highest) { // Checks the highest grade
            highest = grade; } // Saves the highest grade
    }
    cout << "Grades: "; // Shows the grades label
    for (int g : grades) { // Goes through all the grades
        cout << g << " ";  } // Prints each grade
    cout << endl; // Moves to the next line
    cout << "Count: " << grades.size() << endl; // Prints the count
    double average = static_cast<double>(sum) / grades.size(); // Calculates average
    cout << "Average: " << average << endl; // Prints average
    cout << "Highest: " << highest << endl; // Prints highest grade
    return 0;  }// Ends the program
