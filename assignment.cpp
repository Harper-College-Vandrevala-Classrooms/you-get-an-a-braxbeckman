#include "assignment.hpp"

Assignment::Assignment(std::string name, int possiblePoints)
{
  this->name = name;
  this->possiblePoints = possiblePoints;
}

std::string Assignment::getName()
{
  return name;
}

int Assignment::getPoints()
{
  return possiblePoints;
}
