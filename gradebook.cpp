#include "gradebook.hpp"
#include "assignList.hpp"
#include "assignment.hpp"
#include <iostream>

void Gradebook::addStudent(Student s)
{
  s.setAssignList(*assignmentListPtr);
  s.assListSize = &assListSize;
  students.push_back(s);
}

// void Gradebook::addAssigment(Assignment s)
// {
//   assignmentList.push_back(s);
//   // assignments.push_back(s);
//   assListSize = assignments.size();
// }

void Gradebook::displayStudents()
{
  for (Student s : students)
  {
    std::cout << s.getName() << std::endl;
  }
}

void Gradebook::displayAssignments()
{
  for (Assignment a : assignmentList)
  {
    std::cout << a.getName() << std::endl;
  }
}
