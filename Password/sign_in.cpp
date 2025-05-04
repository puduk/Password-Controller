#include "sign_in.hpp"
#include <iostream>
#include <fstream>


void sign_in(data& d){

  std::cout << " Username: ";
  std::cin >> *d.username;
  std::cout << " Password: ";
  std::cin >> *d.password;

  std::ifstream check_file("user.txt" , std::ios::in);
  if (!check_file.is_open()){
    std::cerr << "Error opening file" << std::endl;
    return;
  }

  std::string control_username;
  std::string control_password;
  std::string control_line;
  bool active_account = false;

  while(std::getline(check_file, control_line)){
    if(control_line.find("Username : ") != std::string::npos){
      control_username = control_line.substr(control_line.find(": ") + 2);
    }else if (control_line.find("Password : ") != std::string::npos){
      control_password = control_line.substr(control_line.find(": ") + 2);
      if (control_username == *d.username && control_password == *d.password){
        active_account = true;
      }
    }
  }

  if(active_account){
    std::cout << "Welcome :: " << *d.username << std::endl;
    // menu
  }
  if (!active_account) {
    std::cout << "Username or Password Wrong" << std::endl;
  }
}
