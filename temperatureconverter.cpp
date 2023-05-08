#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  
  std::cout << "Enter the temperature in crazy... I mean, in Fahrenheit: ";

  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is actually " << tempc << " degrees Celsius. You're welcome.\n";
  


}