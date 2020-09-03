/*
Programmer: Joshua Jones
Assignment: Ch5_Num11_Review
Filename: Gaddis_7thED_Ch5_Prob11_PopGrowth
Description: This program tells the user the predicted population 
 * growth of a population depending on the population growth
 * percentage and amount of days inputed by the user.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    const int maxDays=0;
    
        int pop,
            popIncrse,
            totDays,
            popPerc,
            popTot,
                popTotFin;
    
    //Get the population size, percent pop increase and amount of days
    cout<<"What is the starting size of the population?\n";
    cin>>pop;
    while(pop<=1)
    {
        //Explain error
        cout<<"Starting population must be 2 or greater.\n";
        
        //Get input again
        cout<<"What is the starting size of the population? ";
        cin>>pop; 
    }
    
    cout<<"What is the daily population increase as a percentage?\n";
    cin>>popIncrse;
    while(popIncrse<1)
    {
        //Explain error
        cout<<"Population increase can not be negative or zero. "<<endl;
        
        //Get input again
        cout<<"What is the daily population growth increase as a percentage?\n";
        cin>>popIncrse;
    }
    
     cout<<"How many days will the population multiply? ";
    cin>>totDays;
    while(totDays<1)
    {
        //Explain error
        cout<<"Days population is increasing must be 1 or greater. ";
        
        //Get input again
        cout<<"How many days will the population multiply?\n";
        cin>>totDays;
    }
   
    for(int days=1; days<=totDays; days++ )
    {
        popPerc=popIncrse/100;
        popTot=pop+(popPerc*pop);
        popTotFin+=popTot;
                cout<<"The population total is "<<popTotFin<<" for day "
                <<days<<"\n"<<endl;
        
    }
    

    return 0;
}

