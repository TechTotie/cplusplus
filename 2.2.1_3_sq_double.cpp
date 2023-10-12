#include <iostream>
using namespace std;
// no need to use namespace later

double square(double x)
// double ==> double precision floating point number
{
  return x*x;
}

void print_square(double x)
{
  cout << "Square of " << x << " : " << square(x) << "\n";
}

int main()
{
  print_square(10);
}
// Program execcution starts from main and code is place in functions called directly or indirectly from main.
