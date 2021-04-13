#include "Faculty.h"
void Faculty::print() {
    std::cout<<"Name of faculty: "<<name_of_faculty<<std::endl;
    std::cout<<"Loyalty of dean: "<<good_dekan<<std::endl;
}
Faculty::Faculty(std::string new_name_of_faculty, double new_good_dekan) {
    name_of_faculty=new_name_of_faculty;
    good_dekan=new_good_dekan;
}
Faculty::Faculty():name_of_faculty("Zaborostroy"),good_dekan(0.5) {
}



