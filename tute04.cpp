
#include <iostream>
long Factorial(int no);
long nCr(int n, int r);

int main() {
 int n, r;
 std::cout << "Enter a value for n = ";
 std::cin >> n;
 
 std::cout << "Enter a value for r = ";
 std::cin >> r;
 
 std::cout << "nCr = ";
 std::cout << nCr(n,r);
 std::cout << std::endl;
}
long nCr(int n, int r)
{
	return Factorial(n)/(Factorial(r)*Factorial(n-r));
}
long Factorial(int no)
{
	int x;
  int fac = 1;
	for(x = 1; x <= no; x++)
	{
		fac = fac * x;
	}
	return fac;
}