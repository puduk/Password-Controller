#include "first_page.hpp"
#include <iostream>
#include "create_account.hpp"
#include "sign_in.hpp"
#include "help.hpp"
#include "quit.hpp"
#include "forget_password.hpp"


void first_page(data& d){


  while ( *d.first_page_choice >= 0 || *d.first_page_choice <= 6){

    std::cout << " 1 :: for sign in:" << std::endl;
    std::cout << " 2 :: for create account " << std::endl;
    std::cout << " 3 :: for forget password " << std::endl;
    std::cout << " 4 :: for help" << std::endl;
    std::cout << " 5 :: for quit" << std::endl;
    std::cin >> *d.first_page_choice;


    switch (*d.first_page_choice){
      case 1:
        sign_in(d);
        break;
      case 2:
        create_account(d);
        break;
      case 3:
        forget_password(d);
        break;
      case 4:
        help(d);
        break;
      case 5:
        quit(d);
        std::cout << " Quiting... " << std::endl;
        exit(0);
      default:
        std::cout << "Wrong choice" << std::endl;
    }
  }
}