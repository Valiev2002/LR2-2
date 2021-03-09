#include <iostream>
#include<string>
#include "STUDENT.h"
#include "Faculty.h"

int main()
{
Student v("Valiev Vali Samedovich",0.5,1.0);
    v.print();
    v.probability();
    Faculty vs("Power Tea",0.5);
        vs.print();
}