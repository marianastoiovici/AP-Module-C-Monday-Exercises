// C++ program that converts temperatures from Fahrenheit to Centigrade and vice versa based on 
// the user’s input. It prompts the user for a starting temperature followed by a which type of 
// conversion then performs the conversion.
// https://repl.it/@mstoiovici/FahrenheitCentigradeConversion1#main.cpp
#include <iostream>
using namespace std;

/* Method that takes no parameters and returns a float value that stores the user's input for the temperature to be conversed. */
float getTemperatureInput(){
  float temp;
  cout << "Please enter the starting temperature: ";
  cin >> temp; 
  return temp;
}

bool isNumeric(string str) {
  for (int i = 0; i < str.length(); i++)
    if ((isdigit(str[i]) == false) && (str[i] != '.'))
      return false; //when one non numeric value is found and is different than '.', return false
  return true;
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
  string input;
  float temp;
  float fahrenheit, celsius;
  char option;
  bool stop = false;

  // Prevent the user from continuing if the starting temperature is not numeric.
  while (stop == false){
    cout << "Please enter the starting temperature: ";
    getline(cin, input);
    if (isNumeric(input)== true){
      temp = stof(input); // std library's method to cast from a numeric string to a float.
      option = getValidTypeConversionInput();
  
      cout << "Your choice: " << option << endl;

      convert (temp, option);
      stop = true;
    } else {
      stop = false;
    }
  }
  return 0;
}
