#include "Work_on.h"

Work_on::Work_on(){}
Work_on::Work_on(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}