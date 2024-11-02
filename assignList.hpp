#pragma once
#include "assignment.hpp"
#include <vector>

class assignList
{
private:
public:
  static std::vector<Assignment> assignmentList;
  void addAssignment(Assignment a);
};
