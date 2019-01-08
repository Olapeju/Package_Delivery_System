//class for the package. This serves as the bas class for other classes
#include <iostream>
using namespace std;

#ifndef PACKAGE_H
#define PACKAGE_H



class package
{
private:
	//information for sender
	std::string senderName;
	std::string senderAddress;
	std::string senderCity;
	std::string senderState;
	std::string senderZipCode;

	//information for receiver
	std::string receiverName;
	std::string receiverAddress;
	std::string receiverCity;
	std::string receiverState;
	std::string receiverZipCode;

	double weight;
	double cost;

public:
	package(const std::string &, const std::string &, const std::string &, const std::string &, const std::string &,
		const std::string &, const std::string &, const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0);

	void setCost(double); //getter and setter for cost
	double getCost() const;

	void setWeight(double); // getter and setter for weight
	double getWeight() const;

	double calculateCost(); // prototype for calculating cost


	//getter and setter for the sender
	void  setSenderName(string &);
	string getSenderName() const;

	/*
	void  setSenderAddress(const string &);
	string getSenderAddress() const;

	void  setSenderCity(const string &);
	string getSenderCity() const;

	void  setSenderState(const string &);
	string getSenderState() const;

	void  setSenderZipCode(const string &);
	string getSenderZipCode() const;


	//getter and sender for the receiver
	void  setReceiverName(const string &);
	string getReceiverName() const;

	void  setReceiverAddress(const string &);
	string getReceiverAddress() const;

	void  setReceiverCity(const string &);
	string getReceiverCity() const;

	void  setReceiverState(const string &);
	string getReceiverState() const;

	void  setReceiverZipCode(const string &);
	string getReceiverZipCode() const;

	*/
};

#endif