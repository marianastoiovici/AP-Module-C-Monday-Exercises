/* C++ program that converts temperatures from Fahrenheit to Centigrade and vice versa based on the user’s input. It prompts the user for a starting temperature followed by a which type of conversion then performs the conversion. */
// https://repl.it/@mstoiovici/FahrenheitCentigradeConversion#main.cpp
#include <iostream>
using namespace std;

/* Method that takes no parameters and returns a float value that stores the user's input for the temperature to be conversed. */
float getTemperatureInput(){
  float temp;
  cout << "Please enter the starting temperature: ";
  cin >> temp; 
  return temp;
}

/* Method that takes no parameters and returns a char value that stores the user's input for the type of conversion. */
char getValidTypeConversionInput(){
  char option;
  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade." << endl;
  cout << "Press ‘F’ to convert from Centigrade to Fahrenheit." << endl;
  cin >> option;
  if (option == 'c' || option == 'C' || option == 'f' || option == 'F'){
    return option;
  } else {
    cout << "Please enter a valid choice. " << endl;
    return getValidTypeConversionInput();
  }
}


/* Method that takes two parameters and converts the temperatureValue to the type of temperature conversion specified by the optionValue */
float convert(float temperatureValue, char optionValue){
  if (optionValue == 'C' || optionValue == 'c'){
    cout << temperatureValue << " degrees Fahrenheit is " << (temperatureValue - 32) * 5/9 << endl;
    return (temperatureValue - 32) * 5/9;
  } else {
    cout << temperatureValue << " degrees Centigrade is " << (temperatureValue * 9/5) + 32 << endl;
    return (temperatureValue * 9/5) + 32;
  }
}

int main() {
  float temp;
  float fahrenheit, celsius;
  char option;

  temp = getTemperatureInput();
  option = getValidTypeConversionInput();
  
  cout << "Your choice: " << option << endl;

  convert (temp, option);
  
  return 0;
}
