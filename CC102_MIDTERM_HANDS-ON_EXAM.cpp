#include <iostream>
using namespace std;

int main()
{
	double sPU, rPP, srPP, cPU, mPU;
	
	cout << "Price of sugar in USD: ";
	cin >> sPU;
	cout << "Price of rice in Pounds: ";
	cin >> rPP;
	cout << "Price of sardines in Pound: ";
	cin >> srPP;
	cout << "Price of coffee in USD: ";
	cin >> cPU;
	cout << "Price of milk in USD: ";
	cin >> mPU;
	
	int sQty, rQty, srQty, cQty, mQty;
	
	cout << "Quantity of sugar: ";
	cin >> sQty;
	cout << "Quantity of rice: ";
	cin >> rQty;
	cout << "Quantity of sardines: ";
	cin >> srQty;
	cout << "Quantity of coffee: ";
	cin >> cQty;
	cout << "Quantity of milk: ";
	cin >> mQty;
	
	double utp, ptp;
	
	cout << "Conversion of USD to Php: ";
	cin >> utp;
	cout << "Conversion of Pounds tp Php: ";
	cin >> ptp;
	
	double costofS, costofR, costofSr, costofC, costofM;
	
	costofS = sPU * sQty * utp;
	costofR = rPP * rQty * ptp;
	costofSr = srPP * srQty * ptp;
	costofC = cPU * cQty * utp;
	costofM = mPU * mQty * utp;
	
	double tCP;
	
	tCP = costofS + costofR + costofSr +  costofC + costofM;
	
	cout << "The total amount to be paid is: " << tCP;
	return 0;
}
	
	
	