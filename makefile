CXX = g++
CXXFLAGS = -Wall -g
main: main.o functions.o Student.o Parent.o
	$(CXX) $(CXXFLAGS) -o main main.o functions.o Student.o Parent.o
main.o: main.cpp functions.hpp Student.o Parent.o
	$(CXX) $(CXXFLAGS) -c main.cpp
functions.o: functions.hpp Student.hpp Parent.hpp
Student.o: Student.hpp
Parent.o: Parent.hpp
