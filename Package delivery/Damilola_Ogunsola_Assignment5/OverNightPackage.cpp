#include <iostream>
#include <string>
#include "OverNightPackage.h" // this includes the class definition
using namespace std;

OverNightPackage::OverNightPackage(const string &sName, const string &sAddress, const string &sCity, const string &sState, const string &sZipCode,
	const string &rName, const string &rAddress, const string &rCity, const string &rState, const string &rZipCode, double weight, double cost, double feePerOunce)
	: package(sName, sAddress, sCity, sState, sZipCode, rName, rAddress, rCity, rState, rZipCode, weight, cost)
{
	setFeePerOunce(feePerOunce);
}


void OverNightPackage::setFeePerOunce(double feePerOunce1)
{
	if (feePerOunce1 > 0.0)
		feePerOunce = feePerOunce1;
	else
		throw invalid_argument("Fee should be greater than 0.0");
}

double OverNightPackage::getFeePerOunce() const
{
	return feePerOunce;
}

double OverNightPackage::calculateCost()
{
	return (feePerOunce + package::getCost()) * package::getWeight();
}