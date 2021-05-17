/**
 * Project SalesSolution
 */


#pragma once
#include "Product.h"
using namespace System;

namespace AppModel {

    public ref class StoreProduct {
    public:
        property int Stock;
        property int MinStock;
        property double Discount;
        property Product^ Product;
    };
}
