#pragma once
#include<iostream>
#include<string>
class Student {
protected:
    std::string name;
    double karma{};
    double plan{};
public:
     double probability() const;
    virtual void print();
   Student(std::string new_name, double new_karma, double new_plan);
   Student();
};