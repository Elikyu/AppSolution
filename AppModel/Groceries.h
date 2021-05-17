/**
 * Project SalesSolution
 */
#pragma once
#include "Product.h"
using namespace System;

namespace AppModel {

    public ref class Groceries : public Product {
        public:
            property String^ Category;
            property double PriceperWeight;
            Groceries() {}
            Groceries(String^ category, double priceperWeight);
            
    };
}
