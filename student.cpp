//student.cpp
//CPP file for Student class

//libraries and headers
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include "date.h"
#include "address.h"
#include "student.h"

//constructor
Student::Student(){
  Student::lName = new std::string("");
  Student::fName = new std::string("");
  Student::studentAdd = new Address();
  Student::birthDate = new Date();
  Student::compDate = new Date();
  Student::gpa = new float;
  Student::cHours = new int;

} //end of constructor

//destructor
Student::~Student(){
  //TEST:
  std::cout << "Student went through the destructor" << std::endl;

  delete lName;
  delete fName;
  delete studentAdd;
  delete birthDate;
  delete compDate;
  delete gpa;
  delete cHours;

} //end of destructor

//setNames()
void Student::setNames(std::string l, std::string f){
  *Student::lName = l;
  *Student::fName = f;

} //end of setNames

//setStudentAdd()
void Student::setStudentAdd(std::string l1, std::string l2, std::string c, std::string s, int z){
  Student::studentAdd->setAddress(l1, l2, c, s, z); 

} //end of setStudentAdd()

//setBDate()
void Student::setBDate(int m, int d, int y){
  Student::birthDate->setDate(m, d, y);

} //end of setBDate()

//setGDate()
void Student::setGDate(int m, int d, int y){
  Student::compDate->setDate(m, d, y);

} //end of setGDate()

//setGPA()
void Student::setGPA(float g){
  *Student::gpa = g;

} //end of setGPA()

//setHours()
void Student::setHours(int h){
  *Student::cHours = h;

} //end of setHours()

//shortReport()
void Student::shortReport(){
  std::ofstream appFile;
  appFile.open("shortReport.txt", std::ios::app);
  appFile << *Student::lName << "," << *Student::fName << std::endl;
  appFile.close();

} //end of shortReport()

//fullReport()
void Student::fullReport(){
  std::ofstream appFile;
  appFile.open("fullReport.txt", std::ios::app);
  appFile << *Student::lName << "," << *Student::fName << "," << Student::studentAdd->getLine1() << "," << Student::studentAdd->getLine2() << "," << Student::studentAdd->getCity() << "," << Student::studentAdd->getState() << "," << Student::studentAdd->getZip() << "," << Student::birthDate->getDate() << "," << Student::compDate->getDate() << "," << *Student::gpa << "," << *Student::cHours << std::endl; 
  appFile.close();
} //end of fullReport()
