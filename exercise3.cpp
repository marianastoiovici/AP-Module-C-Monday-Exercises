// C++ program that prompts the user for the length and width of a room in
// feet then display the area in both feet and meters squared.
// https://repl.it/@mstoiovici/AreaOfARectangleRoom#main.cpp
#include <iostream>
using namespace std;

int main() {
  const float conversionFactor = 0.3048; 
  float feetLength;
  float feetWidth;
  float metersLength;
  float metersWidth;
  double feetArea;
  double metersArea;

  cout << "What is the length of the room in feet? ";
  cin >> feetLength;

  cout << "What is the width of the room in feet? ";
  cin >> feetWidth;

  metersLength = feetLength * conversionFactor;
  metersWidth = feetWidth * conversionFactor;
  feetArea = feetLength * feetWidth;
  metersArea = metersLength * metersWidth;

  cout << "\n\n" << "Your room’s dimension is " <<  feetLength << " by " << feetWidth << " feet, the area is: " <<endl;

  cout << feetArea << " square foot" << endl;
  cout << metersArea << " square meters" << endl;

  return 0;
}
