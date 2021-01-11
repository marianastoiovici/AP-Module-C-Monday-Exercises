// C++ program that prompts the user for the length and width of a room in
// feet then display the area in both feet and meters squared.
// https://repl.it/@mstoiovici/AreaOfARectangleRoom#main.cpp
#include <iostream>
using namespace std;

bool isNumeric(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false; //when one non numeric value is found, return false
      return true;
}

int main() {
  const float conversionFactor = 0.3048; 
  string length;
  string width;
  float feetLength;
  float feetWidth;
  float metersLength;
  float metersWidth;
  float feetArea;
  float metersArea;

  cout << "What is the length of the room in feet? ";
  cin >> length;

  cout << "What is the width of the room in feet? ";
  cin >> width;

  // if user input is not numeric, stop the program
  if ((isNumeric(length) == true) || (isNumeric(width) == true)) {
    feetLength = stof(length); // std library's method to cast from a numeric string to a float.
    metersLength = feetLength * conversionFactor;
    feetWidth = stof(width);
    metersWidth = feetWidth * conversionFactor;
    feetArea = feetLength * feetWidth;
    metersArea = metersLength * metersWidth;

    cout << "\n\n" << "Your room’s dimension is " <<  feetLength << " by " << feetWidth << " feet, the area is: " <<endl;

    cout << feetArea << " square foot" << endl;
    cout << metersArea << " square meters" << endl;
  } else {
    return 0;
  }
  return 0;
}
