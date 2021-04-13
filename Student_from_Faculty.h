#pragma once
#include <iostream>
#include "STUDENT.h"
#include "Faculty.h"
class Student_from_Faculty : public Student, Faculty {
public:
     Student_from_Faculty(std::string new_name_of_faculty, double new_good_dekan,std::string new_name, double new_karma, double new_plan);
    double probability();
    void print() override;
};
