//address.cpp
//CPP file for Address class

//libraries and headers
#include <iostream>
#include <sstream>
#include "address.h"

//constructor
Address::Address(){
  Address::line1 = "";
  Address::line2 = "";
  Address::city = "";
  Address::state = "";
  Address::zipCode = 0;

} //end of constructor

//setAddress
void Address::setAddress(std::string l1, std::string l2, std::string c, std::string s, int z){
  Address::line1 = l1;
  Address::line2 = l2;
  Address::city = c;
  Address::state = s;
  Address::zipCode = z;

} //end of setAddress

std::string Address::getLine1(){
  return(Address::line1);

}

std::string Address::getLine2(){
  return(Address::line2);

}

std::string Address::getCity(){
  return(Address::city);

}

std::string Address::getState(){
  return(Address::state);

}

std::string Address::getZip(){
  std::stringstream ss;
  std::string zip;
  ss.str("");
  ss << Address::zipCode;
  ss >> zip;
  return(zip);

}
