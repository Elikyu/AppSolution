/**
 * Project SalesSolution
 */


#pragma once

#include "User.h"
using namespace System;

namespace AppModel {
    public ref class Customer : public User {
            public:

                property int CustomerPoints;
                property int Level;

                Customer() {}
                Customer(String^firstName, String^lastName,String^ubication, //blabla
                    String^phoneNumber,int customerpoints, int level);
    };
}

