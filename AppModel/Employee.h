/**
 * Project SalesSolution
 */

#pragma once
#include "User.h"
using namespace System;


namespace AppModel {
    public ref class Employee : public User {


        public:
            property double Salary;
            Employee() {}
            Employee(double salary);
           
            
    };
}
