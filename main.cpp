#include "STUDENT.h"
#include"Faculty.h"
#include "Student_from_Faculty.h"
int main()
{
    Student v("Valiev Vali Samedovich",0.5,1.0);
    v.print();
    v.probability ();
    Faculty vs("Power Tea",0.5);
    vs.print();
    Student_from_Faculty vvs("WHAT?",0.1,"Andrey Paketov ",0.1,0.2);
    vvs.probability();
    vvs.print();
}