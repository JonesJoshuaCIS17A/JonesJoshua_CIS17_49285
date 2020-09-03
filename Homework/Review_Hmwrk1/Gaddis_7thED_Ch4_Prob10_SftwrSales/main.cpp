/*
 * Programmer: Joshua Jones
 * Assignment: Homework 1 Ch4Pr10
 * Filename: Gaddis_7thED_Ch4_Prob10_SftwrSales
 * //Creation Date: 8-26-2020
 * //Description: This program asks for the number of units sold and depending
 *                on the amount sold, applies a discount. 
 */

#include <iostream>
#include <iomanip>


using namespace std;


int main(int argc, char** argv) {

    unsigned short int sold,
                       soldTot;
                       
    float total,
          discount; 
               
    unsigned short int retail=99;
        
        //Ask the user to input amount of units sold
        cout<<"To see your total, enter the amount of units bought:"<<endl;
        cin>>sold;
        
      
        if(sold>1 && sold<=9)
        {
            discount=0;  
        }
        
        else if(sold>=10 && sold<=19)
        {
            discount=.2;
          cout<<"Your discount is 20%"<<endl;          
        }
        
        else if(sold>=20 && sold<=49)
        {    
            discount=.3;
                    cout<<"Your discount is 30%"<<endl;
        }
        
        else if(sold>=50 && sold<=99)
        {
            discount=.4;
            cout<<"Your discount is 40%"<<endl;
        }
        
        else if(sold>=100)
        {
            discount=.5;
            cout<<"Your discount is 50%"<<endl;
        }
        
         else if(sold<1)
        {
            cout<<"You must enter an amount greater than 0"<<endl;
        }
        
        //Give user total
        if(sold>0)
        {       
         soldTot=sold*retail;
        total= soldTot-(soldTot*discount);
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Your total comes to: $"<<total<<endl;
        }
        
        return 0;
}

