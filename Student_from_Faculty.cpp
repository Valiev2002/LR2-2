#include "Student_from_Faculty.h"
#include<iostream>
double Student_from_Faculty::probability() {
    double k = Student::probability()+ good_dekan;
    if (k < 1.0 && k >  0.0)
        return k;
    else if(k >= 1.0){ return 1;}
    else { std::cout<<"Impossible"<<std::endl;}
}
Student_from_Faculty::Student_from_Faculty(std::string new_name_of_faculty, double new_good_dekan, std::string new_name,double new_karma, double new_plan) {
    name_of_faculty=new_name_of_faculty;
    good_dekan=new_good_dekan;
    name=new_name;
    karma=new_karma;
    plan=new_plan;
}
void Student_from_Faculty::print() {
    Student::print();
    Faculty::print();
}