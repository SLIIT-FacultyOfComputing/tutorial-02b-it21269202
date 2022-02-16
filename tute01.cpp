
#include<iostream>
int main()
{
  std::cout << "Hello World" << std::endl;
  float cm, inches;
  std::cout << "Enter a length in cm : ";
  std::cin >> cm;
  //Calculation
  inches = cm / 2.54;
  std::cout << "Length in inches is " << inches;
  return 0;
}
