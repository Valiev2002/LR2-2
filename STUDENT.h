#pragma once
#include<iostream>
#include<string>
class Student {
private:
    std::string name;
    double karma;
    double plan;
public:
    void probability();
    void print();
    Student(std::string new_name, double new_karma, double new_plan);

    Student();
};


