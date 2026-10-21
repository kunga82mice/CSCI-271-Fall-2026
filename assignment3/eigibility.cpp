//Kunga Gurung
//Assignment 3

#include <iostream> //This allows us to use input and output
using namespace std; //This allows us to use cout and cin

int main(){ //This is where the program starts
int age; //This stores the age entered by the user
int member; //This stores if the user is a member or not

    cout << "Enter your age: "; //This asks the user to enter their age
    cin >> age; //This stores the age the user entered
    cout << "Are you a member? (1=yes, 0=no): "; //This asks if the user is a member
    cin >> member; //This stores the answer entered by the user

    if (age >= 60 || (age >= 18 && member == 1)){ //This checks if the user is eligible
        cout << "You qualify for the discount." << endl;} //This prints if the user is eligible
    else { //If the condition above is not true
        cout << "You are not qualified for the discount." << endl;} //This prints if the user is not eligible

    return 0; //This ends the program
}
