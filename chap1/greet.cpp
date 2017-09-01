#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your name:";
  std::string name;
  std::cin >> name;

  const std::string stars(name.size() + 4, '*');
  const std::string spaces(name.size() + 2, ' ');

  std::cout << stars << std::endl;
  std::cout << "*" << spaces << "*" << std::endl;
  std::cout << "* " << name << " *" << std::endl;
  std::cout << "*" << spaces << "*" << std::endl;  
  std::cout << stars << std::endl;

  return 0;
}
