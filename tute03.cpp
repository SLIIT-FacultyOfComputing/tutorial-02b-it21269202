
#include <iostream>
int main()
{
  int no;
  long fac;

  std::cout << "Enter a Number : ";
  std::cin >> no;
  //Calculations
  fac = 1;
  for(int r=no; r >= 1; r--){
    fac = fac * r;
  }
  std::cout << "Factorial of  "<< no << " is " << fac;
}
