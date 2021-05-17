/**
 * Project SalesSolution
 */


#pragma once 

#include "Employee.h"
using namespace System;

namespace AppModel {
    public ref class Manager : public Employee {
    public:
        property int EmployeesNumber;
        property String^ Department;

         
         Manager(int employeesnumber, String^ department);
    };
}

