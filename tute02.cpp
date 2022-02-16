
#include<iostream>
int main()
{
  double salary, netSalary;
  int eType, otHrs, otRate;
  std::cout << "Enter Employee Type : ";
  std::cin >> eType;
  std::cout << "Enter Salary : ";
  std::cin >> salary;
  std::cout << "Enter OtHrs : ";
  std::cin >> otHrs;

  switch(eType){
    case 1 :
        otRate = 1000;
        break;
    case 2 :
        otRate = 1500;
        break;
    default :
        otRate = 1700;
        break;
  }
  netSalary = salary + otHrs* otRate;
  std::cout << "Net Salary : "<<netSalary;
  return 0;
}