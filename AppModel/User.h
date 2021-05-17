/**
 * Project SalesSolution
 */

#pragma once
using namespace System;

namespace AppModel {
    public ref class User {
        public:
            property int Id;
            property String^ Username;
            property String^ Password;
            property String^ FirstName;
            property String^ LastName;
            property char Gender;
            property String^ DocumentNumber;
            property String^ PhoneNumber;
            property String^ Ubication;
            property String^ Email;
            property String^ Ruc;
            property String^ Address;
            User() {}
            User(int id, String^ username, String^ password, String^ firstName, String^ lastName,
                char gender, String^ documentNumber, String^ phoneNumber, String^ ubication,
                String^ email, String^ ruc, String^ address);
    };
}
