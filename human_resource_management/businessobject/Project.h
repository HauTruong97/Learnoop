#ifndef Project_businessobject_Project_h_
#define Project_businessobject_Project_h_
#include <string>
using namespace std;
class Project{
    int Id; //id is increasing number
    string FName, MInit, LName;
    long SSN;
    string BDate, Address;
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;

public:
    Project();
    Project(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno);
};
#endif