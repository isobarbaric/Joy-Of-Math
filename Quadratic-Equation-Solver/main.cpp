#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a;
  double b;
  double c;
  double solution_1;
  double solution_2;
  cout << "Give me a quadratic of the form ax^2+bx+c and I shall tell you its solutions.\n";
  cout << "What is a?\n";
  cin >> a;
  cout << "What is b?\n";
  cin >> b;
  cout << "What is c?\n";
  cin >> c;
  double discriminant = (b*b-4*a*c);
  if (discriminant < 0){
    cout << "Quadratic doesn't have any real solutions. Solutions exist in the complex plane. i is the imaginary number. \n";
    discriminant = -1 * discriminant;
    solution_1 = (-b+sqrt(discriminant))/(2*a);
    solution_2 = (-b-sqrt(discriminant))/(2*a);
    cout << "The roots of the quadratic are: \n";
    cout << "x_1 = " << solution_1 << "i and x_2 = " << solution_2 << "i\n";
  }
  else {
    solution_1 = (-b+sqrt(discriminant))/(2*a);
    solution_2 = (-b-sqrt(discriminant))/(2*a);
    cout << "The roots of the quadratic are: \n";
    cout << "x_1 = " << solution_1 << " and x_2 = " << solution_2 << "\n";
  }
}