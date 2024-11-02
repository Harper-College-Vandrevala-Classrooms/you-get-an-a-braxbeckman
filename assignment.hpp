#pragma once
#include <string>

class Assignment
{
private:
  std::string name{};
  int possiblePoints{};

public:
  Assignment(std::string, int);
  std::string getName();
  int getPoints();
};
