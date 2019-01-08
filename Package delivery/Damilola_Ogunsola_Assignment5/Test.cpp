#include <iostream>
#include <string>
#include <iomanip>
#include "OverNightPackage.h" 
#include "TwoDayPackage.h"
using namespace std;


int main()
{
	TwoDayPackage item1("dami", "2600 bay area", "houston", "texas", "77058", "Racheal", "2700 bay area", "houston", "texas", "77059", 12.00, 1.50, 1.11);
	OverNightPackage item2("olapeju", "2800 bay area blvd", "Houston", "Texas", "77062", "olapeju", "2805 bay area blvd", "Houston", "Texas", "77063", 18.00, 2.10, 8.00);

	
	cout << fixed << setprecision(2);


	cout << "Two Day delivery\n";
	cout << "cost: " << item1.calculateCost() << "\n";



	cout << "Over Night package delivery\n";
	cout << "cost: " << item2.calculateCost() << "\n";

	system("pause");
}