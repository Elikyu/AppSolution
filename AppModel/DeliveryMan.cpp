/**
 * Project SalesSolution
 */

#include "pch.h"
#include "DeliveryMan.h"

/**
 * DeliveryMan implementation
 */



AppModel::DeliveryMan::DeliveryMan(int id, String^ firstName, String^ lastName, String^ phoneNumber, double quota, char status, array<Byte>^ photo, bool available)
{
	Id = id;
	FirstName = firstName;
	PhoneNumber = phoneNumber;
	Quota = quota;
	Status = status;
	Photo = photo;
	Avaliable = available;

}
