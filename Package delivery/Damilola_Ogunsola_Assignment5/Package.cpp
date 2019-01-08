#include <iostream>
#include <string>
#include "Package.h" // this includes the class definition
using namespace std;

package::package(const string &sName, const string &sAddress, const string &sCity, const string &sState, const string &sZipCode,
	const string &rName, const string &rAddress, const string &rCity, const string &rState, const string &rZipCode, double weight, double cost)
{
	senderName = sName;
	senderAddress = sAddress;
	senderCity = sCity;
	setWeight(weight);
	setCost(cost);

}

void package::setWeight(double weight1)
{
	if (weight1 > 0.0)
		weight = weight1;
	else
		throw invalid_argument("weight should be greater than 0.0");
}

double package::getWeight() const
{
	return weight;
}

void package::setCost(double cost1)
{
	if (cost1 > 0.0)
		cost = cost1;

	else
		throw invalid_argument("cost should be greater than 0.0");
}
double package::getCost() const
{
	return cost;
}

double package::calculateCost()
{
	return getWeight() * getCost();
}

//void setSenderName(string sName)
//{
	//senderName = sName;
//}



/*
void  setSenderName(string sName)
{
	sender
} */
/*
string getSenderName() const
{
	return senderName;
}
*/

/*senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZipCode(sZipCode),
	receiverName(rName), receiverAddress(rAddress), receiverCity(rCity), receiverState(rState), receiverZipCode(rZipCode) {
	setWeight(weight);
	setCost(cost);*/