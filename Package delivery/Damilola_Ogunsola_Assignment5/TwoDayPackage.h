//This is a derived class inheriting from class package

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <stdexcept>
#include "Package.h"
#include <string>
class TwoDayPackage : public package
{
public:
	TwoDayPackage(const std::string &, const std::string &, const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0, double = 0.0);


	void setFlatFee(double);
	double getFlatFee()const;

	double calculateCost();
	//void print() const;

private:
	double flatFee;
};


#endif // !TWODAYPACKAGE_H

