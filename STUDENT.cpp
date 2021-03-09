#include "STUDENT.h"
void Student::probability() {
    std::cout<<"Probability of exit"<<1-karma-plan<<std::endl;
}

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
