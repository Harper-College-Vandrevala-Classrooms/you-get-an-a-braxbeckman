#include "student.hpp"
#include "assignment.hpp"
#include <iostream>

Student::Student(std::string firstName, std::string lastName, std::string ID)
{
  this->firstName = firstName;
  this->lastName = lastName;
  this->ID = ID;
}

std::string Student::getName()
{
  std::string output{};
  output += firstName;
  output += " ";
  output += lastName;
  return output;
}

std::string Student::getID()
{
  return ID;
}

void Student::setAssignList(Assignment &assListPtr)
{
  assignmentListPtr = &assListPtr;
}

void Student::displayAssignments()
{
  for (int i = 0; i < 1; i++)
  {
    std::cout << (assignmentListPtr + i)->getName() << std::endl;
  }
}
