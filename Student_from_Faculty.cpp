#include "Student_from_Faculty.h"
#include<iostream>
double Student_from_Faculty::probability() {
    if (Student::probability() > 1.0 && Student::probability() < 0.0)
        std::cout << "Error(я не знаю как по английски,но короче такакя вероятнгсть невозможна)" << std::endl;
    else {}
    return Student::probability() + good_dekan;
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




