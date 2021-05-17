/**
 * Project SalesSolution
 */
#include "StoreProduct.h"
#pragma once
using namespace System;

namespace AppModel {
    public ref class SaleDetail {
        public:
            property double Quantity;
            property double UnitPrice;
            property StoreProduct^ StoreProduct;

    };
}

