//Programmer:		Joshua Jones
//Assignment:		Program Challenge
//			Ch03 Number 12
//Filename:		Ch03_PC12.cpp
//Creation Date:	8-26-2020
//Description:		This purpose of this program is
//			to generate a monthly sales tax report list
//			for sales for the month and amount of sales tax collected.

//Preprocessor Directive
#include<iostream>
#include<string>	//Required for strings
#include<iomanip>	//Required for setq and fixed-point notation

using namespace std;

//The next line of code begins every C++ program
int main()
{
//Variable Definition Statements
	double year,
		totalCollected,
		sales,
		countyTax,
		stateTax,
		totalTax;
	string month;
//Overview Statements
	cout << "\nThis program produces a monthly sales tax " << endl;
	cout << "report listing the sales for the month and " << endl;
	cout << "and the amount of sales tax collected. " << endl << endl;
//Input- Using prompt and response method from Ch 3
//Get the month, year and total amount collected at register
	cout << "What month is this report for?" << endl << endl;
	cin >> month;
	cout << endl<< "What is the year? " << endl << endl;
	cin >> year;
	cout << endl<< "What was the total amount collected at the cash register? " << endl << endl;
	cin >> totalCollected;
//Processing- Variable Assignment Statement using an expression
	sales = totalCollected / 1.06;
	countyTax = totalCollected * .02;
	stateTax = totalCollected * .04;
	totalTax = countyTax + stateTax;

//Output to the screen
	cout <<endl<< "Month: " << month << "  Year: " << year<< endl;
	cout << "----------------------------"<<endl<<endl;
	cout << fixed << setprecision(2);
	cout << "Total Collected: \t\t$ " <<setw(9)<<totalCollected<<endl;
	cout << "Sales: \t\t\t\t$ "<< setw(9)<<sales<<endl;
	cout << "Count Sales Tax: \t\t$ " <<setw(9)<<countyTax << endl;
	cout << "State Sales Tax: \t\t$ " <<setw(9)<<stateTax << endl;
	cout << "Total Sales Tax: \t\t$ " <<setw(9)<< totalTax << endl;


//The next line of code reads: Return zero
	return 0;
}

