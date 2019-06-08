#include <iostream>
#include <cmath>

int main() {
  double a;
  double b;
  double c;
  std::cout << "Enter a: \n";
  std::cin >> a;
  std::cout << "Enter b: \n";
  std::cin >> b;
  std::cout << "Enter c: \n";
  std::cin >> c;
  
  double root1;
  double root2;
  
  root1 = (-b+std::sqrt(pow(b,2)-4*a*c))/(2*a);
  
  root2 = (-b-std::sqrt(pow(b,2)-4*a*c))/(2*a);
  
  std::cout << "first root is " << root1 << "\n";
  std::cout << "second root is " << root2 << "\n";
  
  
return 0;
  
  
  
}
