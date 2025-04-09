//main.cpp

//libraries and headers
//#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include "date.h"
#include "address.h"
#include "student.h"

//main function
int main() {
  //data
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream ss;

  //open input file
  inFile.open("students.dat");

  for(int i = 0; i < 50; i++){
    getline(inFile, currentLine);
    //clear stringstream
    ss.clear();
    ss.str("");

    ss.str(currentLine);

    //Initializing the Student class
    std::string fName;
    std::string lName;
    getline(ss, lName, ',');
    getline(ss, fName, ',');


    Student* s = new Student();
    s->setNames(lName, fName);
    
    //Setting up the Student Address
    std::string address1;
    std::string address2;
    std::string city;
    std::string state;
    std::string zip;
    int zipC;
    getline(ss, address1, ',');
    getline(ss, address2, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    getline(ss, zip, ',');
    zipC = std::atoi(zip.c_str());
    
    s->setStudentAdd(address1, address2, city, state, zipC);

    //Setting up Student Birth Date
    std::string date;
    std::stringstream dateSS;
    std::string month;
    std::string day;
    std::string year;
    int monthI;
    int dayI;
    int yearI;
    getline(ss, date, ',');
    dateSS.str(date);

    getline(dateSS, month, '/');
    monthI = std::atoi(month.c_str());

    getline(dateSS, day, '/');
    dayI = std::atoi(day.c_str());
    getline(dateSS, year);
    yearI = std::atoi(year.c_str());
    
    s->setBDate(monthI, dayI, yearI);

    //Setting up Student Graduation Date

    std::string date2;
    std::stringstream dateSS2;
    std::string month2;
    std::string day2;
    std::string year2;
    int monthI2;
    int dayI2;
    int yearI2;
    getline(ss, date2, ',');
    dateSS2.str(date2);

    getline(dateSS2, month2, '/');
    monthI2 = std::atoi(month2.c_str());

    getline(dateSS2, day2, '/');
    dayI2 = std::atoi(day2.c_str());
    getline(dateSS2, year2);
    yearI2 = std::atoi(year2.c_str());
    

    s->setGDate(monthI2, dayI2, yearI2);


    //Setting up Student GPA
    std::string gpa;
    float gpaF;
    getline(ss, gpa, ',');
    gpaF = std::stof(gpa);
    
    s->setGPA(gpaF);

    //Setting up Student Credit Hours
    std::string hours;
    getline(ss, hours);
    int hoursI = std::atoi(hours.c_str());
    s->setHours(hoursI); 

    s->shortReport();
    s->fullReport();
  } //end of for loop

  
  //delete[] sA;
  inFile.close();

  return 0;
} //end of main 
