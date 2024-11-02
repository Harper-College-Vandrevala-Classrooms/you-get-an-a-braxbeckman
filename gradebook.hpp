#pragma once
#include "assignList.hpp"
#include "assignment.hpp"
#include "student.hpp"
#include <string>
#include <vector>

class Gradebook : public assignList
{
private:
  std::vector<Student> students;
  std::vector<Assignment> assignments;
  Assignment *assignmentListPtr = &assignments[0];
  int assListSize{0};

public:
  void addStudent(Student);
  // void addAssigment(Assignment);
  void displayStudents();
  void displayAssignments();
};
