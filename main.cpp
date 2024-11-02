#include "assignList.hpp"
#include "assignment.hpp"
#include "gradebook.hpp"
#include "student.hpp"
#include <iostream>

int main()
{
  Gradebook g;
  Student braxton("Braxton", "Beckman", "BSD047");
  Assignment a("Lab 1", 100);

  g.addStudent(braxton);
  g.displayStudents();

  g.addAssignment(a);
  g.displayAssignments();

  // std::cout << "\nBraxton Info: \n";
  // braxton.displayAssignments();
}
