#include <iostream>
#include <string>
#include "TwoDayPackage.h" // this includes the class definition
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sName, const string &sAddress, const string &sCity, const string &sState, const string &sZipCode,
	const string &rName, const string &rAddress, const string &rCity, const string &rState, const string &rZipCode, double weight, double cost, double flatFee)
	: package(sName, sAddress, sCity, sState, sZipCode, rName, rAddress, rCity, rState, rZipCode, weight, cost)
{
	setFlatFee(flatFee);
}


void TwoDayPackage::setFlatFee(double flatFee1)
{
	if (flatFee1 > 0.0)
		flatFee = flatFee1;
	else
		throw invalid_argument("Flat fee should be greater than 0.0");
}

double TwoDayPackage::getFlatFee() const
{
	return flatFee;
}

double TwoDayPackage::calculateCost()
{
	return getFlatFee() + package::calculateCost();
}