#include "Student_from_Faculty.h"
#include<iostream>
double Student_from_Faculty::probability(double karma, double plan,double good_dekan) {
    return Student::probability(karma,plan)+good_dekan;
}

Student_from_Faculty::Student_from_Faculty(std::string new_name_of_faculty, double new_good_dekan, std::string new_name,
                                           double new_karma, double new_plan) {
    name_of_faculty=new_name_of_faculty;
    good_dekan=new_good_dekan;
    name=new_name;
    karma=new_karma;
    plan=new_plan;
}
void Student_from_Faculty::print() {
    std::cout<<"Name of faculty: "<<name_of_faculty<<std::endl;
    std::cout<<"Loyalty of dean: "<<good_dekan<<std::endl;
    std::cout<<"Student's name: "<<name<<std::endl;
    std::cout<<"Student's karma: "<<karma<<std::endl;
    std::cout<<"Student's work plan: "<<plan<<std::endl;
}




