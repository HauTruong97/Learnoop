#include <iostream>
#include "Employee.h"
#include "Departerment.h"
#include "Dept_locations.h"
#include "Project.h"
#include "Work_on.h"
#include "Dependent.h"
#include "Base.h"
using namespace std;

int main(){
    cout << "hello" << endl;
    // Dept_locations A(5,"co len toi oi");
    // Employee e(1, "Chau", "Bao", "Ngo", 111222333, "1975-04-30", "Chicago", 'M', 10000, -1, 5);
    Employee employee[100];
    int soLuongOfEmployee=0;
    int idOfEmployee=0;
    
    int key;
     
     while(true){
         cout<<"nhap lua chon cua ban:"<<endl;
         cin>>key;
    switch(key){
    case 1:
    std::cout<<"soLuongOfEmployee:"<<" "<<soLuongOfEmployee<<endl;
    for (int i=0;i<=soLuongOfEmployee;i++){
        employee[i].add();
    }
    soLuongOfEmployee++;
    break;
    }
    }

    return 0;
}

