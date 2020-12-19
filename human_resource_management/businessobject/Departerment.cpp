#include "Departerment.h"

Departerment::Departerment(){}
Departerment::Departerment(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    SuperSSN = superSSN;
    DNO = dno;
}