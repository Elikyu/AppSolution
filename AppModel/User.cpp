/**
 * Project SalesSolution
 */

#include "pch.h"
#include "User.h"

/**
 * User implementation
 */

AppModel::User::User(int id, String^ username, String^ password, String^ firstName, String^ lastName, char gender, String^ documentNumber, String^ phoneNumber, String^ ubication, String^ email, String^ ruc, String^ address)
{
	Id = id;
	Username = username;
	Password = password;
	FirstName = firstName;
	LastName = lastName;
	Gender = gender;
	DocumentNumber = documentNumber;
	PhoneNumber = phoneNumber;
	Ubication = ubication;
	Email = email;
	Ruc = ruc;
	Address = address;

}
