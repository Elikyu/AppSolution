/**
 * Project SalesSolution
 */


#pragma once

#include "Product.h"
#include "Taxable.h"


using namespace System;

namespace AppModel {
    public ref class Electronic : public Product, Taxable {
        public:
            property String^ Family;
            property String^ Model;
            property int Warranty;
            virtual double GetTax();


    };
}

