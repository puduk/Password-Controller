#include "forget_password.hpp"
#include <iostream>
#include <fstream>


void forget_password(data& d){

  std::cout << "Enter your username :: " << std::endl;
  std::cin >> *d.username;

  std::ifstream forget_file("user.txt" , std::ios::in);
  if (!forget_file.is_open()){
    std::cout << "Currently out of service " << std::endl;
    return;
  }

  std::string found_username;
  std::string forget_line;
  std::string user_data;
  std::string user_id;


  while(std::getline(forget_file, forget_line)){
    if(forget_line.find(*d.username) != std::string::npos){
      user_id = forget_line.substr(0 , forget_line.find(". "));
    }
  }



  std::ifstream show_file("user.txt" , std::ios::in);
  std::string show_line;
  std::string show_password;


  while(std::getline(show_file, show_line)){
    if (show_line.find(user_id + ". Password : ") != std::string::npos) {
      show_password = show_line.substr(show_line.find(": ") + 2);
      std::cout << "Your password is: " << show_password << std::endl;
    }

  }

}

