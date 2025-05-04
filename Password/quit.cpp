#include <iostream>
#include "quit.hpp"

void quit(data& d){

  std::cout << "Thank you for using this program." << std::endl;
  std::cout << "Please dont forget to rate us (1-10)" << std::endl;
  std::cin.ignore();
  std::cin.clear();
  std::cin >> *d.user_rate;




}