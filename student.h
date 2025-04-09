//sudent.h
//header file for Student class

//header guard
#ifndef STUDENT_H
#define STUDENT_H

//libraries and dependencies
#include <iostream>
#include "address.h"
#include "date.h"

//class definition
class Student{
  private:
    std::string* fName;
    std::string* lName;
    Address* studentAdd;
    Date* birthDate;
    Date* compDate;
    float* gpa;
    int* cHours;

  public:
    Student(); 
    ~Student();
    void fullReport();
    void shortReport();
    void setNames(std::string l, std::string f);
    void setStudentAdd(std::string l1, std::string l2, std::string c, std::string s, int z);
    void setBDate(int m, int d, int y);
    void setGDate(int m, int d, int y);
    void setGPA(float g);
    void setHours(int h); 
    

}; //end of class defintion


#endif
