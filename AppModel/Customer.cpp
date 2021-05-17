/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Customer.h"

/**
 * Customer implementation
 */



AppModel::Customer::Customer(String^ firstName, String^ lastName, String^ ubication, String^ phoneNumber, int customerpoints, int level)
{
	FirstName = firstName;
	LastName = lastName;
	Ubication = ubication;
	PhoneNumber = phoneNumber;
	CustomerPoints = customerpoints;
	Level = level;

}
