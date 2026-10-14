//Kunga Gurung
//Assignment 5
#include <iostream> //Lets us use cout and cin
using namespace std; //So we dont have to type std::
void printForward(const int arr[], int size) { //Function to print array forward
    cout << "Forward: "; //Shows forward
    for (int i=0; i<size; i++) { //Loops from first to last
        cout << arr[i] << " "; } //Prints each number
    cout << endl;}//Goes to next line

void printReverse(const int arr[], int size) { //Function to print array backwards
    cout << "Reverse: "; //Shows reverse
    for (int i=size-1; i>=0; i--) { //Loops from last to first
        cout << arr[i] << " "; } //Prints each number
    cout << endl;} //Goes to next line

int countAbove(const int arr[], int size, int limit) { //Function to count numbers above limit
    int count=0; //Starts count at 0
    for (int i=0; i<size; i++) { //Checks all numbers in array
        if (arr[i] > limit) { //Checks if number is above limit
            count++; } //Adds 1 to count
    }
    return count;}//Returns the count

int main() { //Starts the program
    const int SIZE=6; //Sets array size to 6
    int values[SIZE]={14,3,27,9,50,21}; //Stores 6 numbers
    int limit; //Stores the limit from user
    printForward(values,SIZE); //Prints array forward
    printReverse(values,SIZE); //Prints array backwards
    cout << "Count values above: "; //Ask user for limit
    cin >> limit; //Stores the limit
    cout << "Count: " << countAbove(values,SIZE,limit) << endl; //Shows how many numbers are above limit
    return 0;} //Ends the program
