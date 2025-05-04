#include "create_account.hpp"
#include <iostream>

#include <fstream>

void create_account(data& d){

  std::cin.ignore(1000 , '\n');
  std::cout << "Create username :: " << std::endl;
  std::getline(std::cin, *d.username);
  std::cout << "Create password :: " << std::endl;
  std::getline(std::cin, *d.password);


  std::ifstream control_file("user.txt" , std::ios::in);
  if (!control_file.is_open()){
    std::cerr << "Error opening file" << std::endl;
    return;
  }

  std::string count_line;
  int user_amount = 0;
  while (std::getline(control_file, count_line)){
    if (count_line.find("Username : " ) != std::string::npos){
      user_amount++;
    }
  }

  std::string found_username ;
  std::string line_reader ;
  bool already_taken_username = false;

  while(std::getline(control_file, line_reader)){
    if(line_reader.find("Username : ") != std::string::npos){
      found_username = line_reader;
      if(found_username == *d.username){
        already_taken_username = true;
      }
    }
  }

  if(already_taken_username){
    std::cout << " This Username Already Taken " << *d.username << std::endl;
    std::cerr << " Please Try Another Username " << std::endl;
    return;
  }

  std::string username_found ;
  std::string password_found ;
  std::string reader_line ;
  bool already_created = false;

  while(std::getline(control_file, line_reader)){
    if(line_reader.find("Username : ") != std::string::npos){
      username_found = line_reader;
    }else if (line_reader.find("Password : ") != std::string::npos){
      password_found = line_reader;
      if(username_found == *d.username && password_found == *d.password){
        already_created = true;
      }
    }
  }

  if(already_created){
    std::cout << " This Account Already Created " << std::endl;
    std::cout << " Please Try To Sign In " << std::endl;
    // first page
  }

  user_amount ++;
  std::ofstream enter_file("user.txt" , std::ios::app);
  enter_file << user_amount << ". " << "Username : " << *d.username << std::endl;
  enter_file << user_amount << ". " << "Password : " << *d.password << std::endl;

  std::cout << "Account Successfully Created!" << std::endl;

}


