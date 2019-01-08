//This is a derived class inheriting from class package

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <stdexcept>
#include "Package.h"
#include <string>
class OverNightPackage : public package
{
public:
	OverNightPackage(const std::string &, const std::string &, const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0, double = 0.0);


	void setFeePerOunce(double);
	double getFeePerOunce()const;

	double calculateCost();
	//void print() const;

private:
	double feePerOunce;
};


#endif // !OVERNIGHTPACKAGE_H
#pragma once
