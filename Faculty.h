#pragma once
#include <iostream>
#include <string>
class Faculty {
private:
    std::string name_of_faculty;
    double good_dekan;
public:
    void print();
   Faculty(std::string new_name_of_faculty, double new_good_dekan);
};


