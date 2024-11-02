#pragma once
#include "assignList.hpp"
#include "assignment.hpp"
#include <string>

class Student : private assignList
{
private:
  std::string firstName{};
  std::string lastName{};
  std::string ID{};
  Assignment *assignmentListPtr;

public:
  Student(std::string, std::string, std::string);
  std::string getName();
  std::string getID();
  int *assListSize{};
  void setAssignList(Assignment &assignmentListPtr);
  void displayAssignments();
};
