/*
 * Programmer: Joshua Jones
 * Assignment: Homework 1 Ch3Pr13
 * Filename: Gaddis_7thED_Ch3_Prob13_PropertyTax
 * Creation Date: 8-26-2020
 * Description: This program calculates the property tax and assessment value
 *              for a property.
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    
   //I space variables for readability
   double  prop,
           assessProp,
           propTax,
           propTaxTot;
   
   propTax=.0064;
   
   //Overview Statements
   cout<<"This program calculates the assessment value and property tax"<<endl;
   cout<<"for a given property."<<endl<<endl;
   
   //Input-get input from user for property value
   cout<<setprecision(2)<<fixed;
   cout<<"What is the value of the property?"<<endl<<endl;
   cin>>prop;
   
   //Processing-Variable assignment statement using expressions
   assessProp= prop*.6;
   propTaxTot=propTax*assessProp;
   
   //Output the Property Tax and Assessment value
   cout<<"The value of the property is: $"<<prop<<endl<<endl;
   cout<<"The assessment value of the property is: $"<<assessProp<<endl<<endl;
   cout<<"The property tax is: $"<<propTaxTot<<endl;
           
    return 0;
}

