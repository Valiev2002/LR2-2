#pragma once
#include <iostream>
#include <string>
class Faculty {
protected:
   double good_dekan{};
    std::string name_of_faculty;
public:
     void print();
   Faculty(std::string new_name_of_faculty, double new_good_dekan);
   Faculty();
};