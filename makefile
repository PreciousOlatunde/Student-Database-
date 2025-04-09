studentData: date.o address.o student.o main.cpp students.dat
	g++ address.o student.o date.o main.cpp -o studentData
date.o: date.cpp date.h
	g++ -c date.cpp
address.o: address.cpp address.h
	g++ -c address.cpp
student.o: student.cpp student.h date.o address.o
	g++ -c student.cpp
valgrind:
	valgrind ./studentData 
clean:
	rm -f *.o
	rm studentData
	rm shortReport.txt
	rm fullReport.txt
run: studentData
	./studentData