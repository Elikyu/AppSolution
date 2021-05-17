/**
 * Project SalesSolution
 */


#pragma once
#include "Employee.h"
#include "StoreBranch.h"

using namespace System;

namespace AppModel {
    public ref class DeliveryMan : public Employee {
    public:
        property double Quota;
        property char Status;
        property array<Byte>^ Photo;
        property bool Avaliable;
        property StoreBranch^ StoreBranch; //123


        DeliveryMan() {}
        DeliveryMan(int id, String^ firstName,String^ lastName,String^ phoneNumber,double quota, char status, array <Byte>^ photo, bool available);
    };
}

