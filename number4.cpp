#include <iostream>
#include <string>


    int main()
    {
   int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  std::string str =
std::to_string(number);

  std::cout << "String value: " << str
 << std::endl;

  return 0;
    } 

