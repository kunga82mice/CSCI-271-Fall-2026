//Kunga Gurung
//Assignment 3

#include <iostream> //This allows us to use input and output
using namespace std; //This allows us to use cout and cin

int main(){ //This is where the program starts
int temperature; //This stores the temperature entered by the user
  
  cout << "Enter the temperature (F): "; //This asks the user to enter the temperature
  cin >> temperature; //This stores the temperature the user entered

  if (temperature < 32){ //This checks if the temperature is below 32
    cout << "Freezing" << endl;} //This prints Freezing if the temperature is below 32
  else if (temperature < 60){ //This checks if the temperature is below 60
    cout << "Cold" << endl;} //This prints Cold if the condition is true
  else if (temperature < 77){ //This checks if the temperature is below 76
    cout << "Mild" << endl;} //This prints Mild if the condition is true
  else { //If none of the conditions above are true
    cout << "Hot" << endl; } //This prints Hot

    return 0; //This ends the program
}
