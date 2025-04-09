# Student-Database-
This program uses string streams, file input/output, file parsing and object-oriented programming to read in a file ('student.dat'), create student profiles for each student in the file, and create 2 output files: a short report and full report.

'Student.dat' is a text file in comma-separatd format with each line containing information belonging to one student (i.e their name, address, date of birth,  graduation date, GPA, etc)
Using this data file, the program runs and generates a "short report" (which is essentially a list of the names of all the students present in 'student.dat'), and a "full report" (an indentical copy of the original data file, but with a .txt extension
'UML.png' is a Unified Modeling Language diagram acting as a visual represention of the design and implementation of the Objects in this program and their relationships

Files needed to run/execute the program:
1. address.h
2. address.cpp
3. date.h
4. date.cpp
5. students.h
6. students.cpp
7. students.dat
8. main.cpp
9. makefile

How to run/execute the program:
1. All aforementioned files need to be present and in your current working directory
2. Type "make run" in the terminal prompt and press enter

Additional info:
1. Type and enter "make clean" to remove all previously generated "shortReport.txt", "fullReport.txt" and executables 
