//Kunga Gurung
//Assignment 5
#include <iostream> //Lets us use cout and cin
using namespace std; //So we dont have to type std::
int main() { //Starts the program
    const int SIZE=5; //Sets the array size to 5
    int scores[SIZE]; //Stores 5 scores or 0-4 array. 

    for (int i=0; i<SIZE; i++) { //Loops 5 times
        cout << "Enter score " << i+1 << ": "; //Ask user to enter score
        cin >> scores[i]; }//Stores the score
    
    int sum=0; //Stores the total
    int highest = scores[0]; //Starts with first score
    int lowest = scores[0]; //Starts with first score
    
    for (int i=0; i<SIZE; i++) { //Checks all scores
        sum = sum + scores[i]; //Adds all scores
        if (scores[i] > highest) { //Checks for highest score
            highest = scores[i]; }//Stores highest score
        if (scores[i] < lowest) { //Checks for lowest score
            lowest = scores[i]; } //Stores lowest score
    }
    double average = static_cast<double>(sum) / SIZE; //Finds the average with decimals
    cout << "Scores: "; //Shows the scores
    for (int i=0; i<SIZE; i++) { //Loops through the scores
        cout << scores[i] << " ";} //Prints each score
    cout << endl; //Goes to next line
    cout << "Sum: " << sum << endl; //Shows sum
    cout << "Average: " << average << endl; //Shows average
    cout << "Highest: " << highest << endl; //Shows highest
    cout << "Lowest: " << lowest << endl; //Shows lowest
    return 0; //Ends the program
}
