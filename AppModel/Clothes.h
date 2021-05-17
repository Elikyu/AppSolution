/**
 * Project SalesSolution
 */

#pragma once

#include "Product.h"
using namespace System;

namespace AppModel {
    public ref class Clothes : public Product {
    public:
        property String^ Size;
        Clothes() {}
        Clothes(String^ size);
    };
}
