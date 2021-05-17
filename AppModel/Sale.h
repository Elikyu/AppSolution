/**
 * Project SalesSolution
 */

#pragma once
#include "DeliveryMan.h"
#include "Customer.h"
#include "SaleDetail.h"
using namespace System;
using namespace System::Collections::Generic;

namespace AppModel {
    public ref class Sale {
            public:
                property int Id;
                property double Total;
                property char Status;
                property String^ Date;
                property DeliveryMan^ DeliveryMan;
                property Customer^ Customer;
                property StoreBranch^ StoreBranch;
                property List<SaleDetail^>^ Details;
                property char PaymentType;
                property int Rate;
                property int ArrivalTime;
                property bool Delivered;
                
    };
}
