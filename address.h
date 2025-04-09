//address.h
//Header file for Address class

//header guard
#ifndef ADDRESS_H
#define ADDRESS_H

//libraries and dependencies
#include <iostream>

//class definition
class Address{
  private:
    std::string line1;
    std::string line2;
    std::string city;
    std::string state;
    int zipCode;

  public:
    Address();
    void setAddress(std::string l1, std::string l2, std::string c, std::string s, int z);
    std::string getLine1();
    std::string getLine2();
    std::string getCity();
    std::string getState();
    std::string getZip();

}; //end of class deifinition



#endif
