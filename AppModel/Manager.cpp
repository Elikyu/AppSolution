/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Manager.h"

/**
 * Manager implementation
 */

AppModel::Manager::Manager(int employeesnumber, String^ department)
{
	EmployeesNumber = employeesnumber;
	Department = department;
}
