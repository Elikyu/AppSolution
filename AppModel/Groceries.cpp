/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Groceries.h"

/**
 * Groceries implementation
 */

AppModel::Groceries::Groceries(String^ category, double priceperWeight)
{
	Category = category;
	PriceperWeight = priceperWeight;
}
