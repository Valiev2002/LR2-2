#include "STUDENT.h"
void Student::print() {
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Karma: "<<karma<<std::endl;
    std::cout<<"Plan: "<<plan<<std::endl;
}
Student::Student(std::string new_name, double new_karma, double new_plan) {
    name=new_name;
    karma=new_karma;
    plan=new_plan;
}
double Student::probability() const {
    return 1-karma-plan;
}

Student::Student():name("Andrey Paketov"),karma(0.0),plan(0.0) {
}
