#include "help.hpp"
#include <iostream>


void help(data& d) {


  std::cout << "1 :: for contact the AI " << std::endl;
  std::cout << "2 :: for Customer Service " << std::endl;
  std::cout << "3 :: for Communication Address " << std::endl;
  std::cin >> *d.help_choice;
  if(std::cin.fail()){
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Please enter a valid input." << std::endl;
    return;
  }

  switch(*d.help_choice) {
    case 1:
      std::cout << "Currently AI is not working properly." << std::endl;
      std::cout << "Thank you for understanding." << std::endl;
      break;
    case 2:
      std::cout << "Please enter your phone number :: " << std::endl;
      std::cin.ignore();
      std::getline(std::cin,*d.user_phone_number);
      std::cout << "Customer service will contact with you from :: " << *d.user_phone_number << std::endl;
      break;
    case 3:
      std::cout << "___ For Contact ___ " << std::endl;
      std::cout << "Company Address :: " << *d.company_address << std::endl;
      std::cout << "Email Address :: " << *d.email << std::endl;
      std::cout << "Phone Number :: " << *d.phone_number << std::endl;
      std::cout << std::endl;
      break;
    default:
      break;
  }
}
