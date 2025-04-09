//date.h
//Header file for Date class

//header guard
#ifndef DATE_H
#define DATE_H

//libraries and dependencies
#include <iostream>

//class definition
class Date{
  private:
    int month;
    int day;
    int year;
 
  public:
    Date();
    void setDate(int m, int d, int y);
    std::string getDate();

}; //end of class defintion


#endif
