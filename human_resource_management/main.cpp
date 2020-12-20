#include <iostream>
#include "Employee.h"
#include "Departerment.h"
#include "Dept_locations.h"
#include "Project.h"
#include "Work_on.h"
#include "Dependent.h"
using namespace std;

int main(){
    cout << "hello" << endl;
    Dept_locations A(5,"co len toi oi");
    Employee e(1, "Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 5);
    return 0;
}

