/**
 * Project SalesSolution
 */
#include "StoreProduct.h"
using namespace System::Collections::Generic;

#pragma once 
using namespace System;

namespace AppModel {
    public ref class StoreBranch {
    public:
        property int Id;
        property String^ Name;
        property String^ Address;
        property String^ PostalCode;
        property bool Avaliable;
        property  List<StoreProduct^ >^ StoreProductList;
    };
}
