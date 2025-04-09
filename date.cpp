//date.cpp
//CPP file for Date class

//libraries and headers
#include <iostream>
#include <sstream>
#include "date.h"

//constructor
Date::Date(){
  Date::month = 0;
  Date::day = 0;
  Date::year = 0;

} //end of null-parameter constructor

void Date::setDate(int m, int d, int y){
  Date::month = m;
  Date::day = d;
  Date::year = y;

} //end of setDate

std::string Date::getDate(){
  //std::stringstream ss;
  std::string m;
  std::string d;
  std::string y;
  
  /*ss << Date::month;
  ss >> m;
  ss.str("");
  ss << Date::day;
  ss >> d;
  ss.str("");
  ss << Date::year;
  ss >> y;
  ss.str("");*/

  m = std::to_string(Date::month);
  d = std::to_string(Date::day);
  y = std::to_string(Date::year);
  std::string date = m + "/" + d + "/" + y;
  return(date);

} //end of getDate() 
