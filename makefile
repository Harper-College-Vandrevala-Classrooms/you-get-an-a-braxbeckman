test:
	g++ -Wall -Wpedantic -std=c++20 -o main main.cpp gradebook.cpp student.cpp assignment.cpp assignList.cpp && ./main

make:
	g++ -Wall -Wpedantic -std=c++20 -o main main.cpp gradebook.cpp student.cpp assignment.cpp assignList.cpp
