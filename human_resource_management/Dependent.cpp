#include "Dependent.h"

Dependent::Dependent(){}
Dependent::Dependent(long ssn,std::string depndentName,char sex,std::string bDate,std::string relationShip){
    SSN=ssn;
    DepndentName=depndentName;
    Sex=sex;
    BDate=bDate;
    Relationship=relationShip;
}