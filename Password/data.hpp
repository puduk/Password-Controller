#ifndef DATA_H
#define DATA_H
#include <iostream>

class data {
  public:

    int* first_page_choice = new int;
    int* help_choice = new int;
    int* user_rate = new int;

    std::string* username = new std::string;
    std::string* password = new std::string;

    std::string* phone_number ;
    std::string* email ;
    std::string* company_address ;

    std::string* user_phone_number = new std::string;




    data();
    ~data(){
      delete first_page_choice;
      delete help_choice;
      delete user_rate;
      delete username;
      delete password;
      delete user_phone_number;
    };
};


#endif

