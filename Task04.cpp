#include<iostream>
using namespace std ;
float CellularCompany(char type , char time , int minutes) ;
main()
{
    char type , time;
    int minutes ;
    string typeText , timeText ;
    cout << "Enter the service code (R/r for regular, P/p for premium): " ;
    cin >> type ;
    if (type == 'p' || type == 'P') 
    {cout << "Enter time of the call (D/d for day , N/n for night): " ;
    cin >> time ;}
    cout << "Enter the number of minutes used: " ;
    cin >> minutes ;
    if (type ==  'P' || type == 'p') typeText ="Premium" ;
    if (type ==  'R' || type == 'r') typeText ="Regular" ;
    cout << "Service Type: " << typeText << endl ;
    cout << "Total Minutes Used: " << minutes << " minutes" << endl ;
    cout << "Amount Due: " << "$" << CellularCompany( type ,time ,  minutes)  ;
}    

float CellularCompany(char type , char time , int minutes) 
{
    float amountDue  ;
    if ((type == 'P' || type == 'p') && (time == 'n' || time =='N') && minutes <= 100) amountDue = 25.00 ;
    if ((type == 'P' || type == 'p') && (time == 'd' || time =='D') && minutes <= 75) amountDue = 25.00 ;
    if ((type == 'P' || type == 'p') && (time == 'n' || time =='N') && minutes > 100) amountDue = 25.00 + (minutes - 100) * 0.05 ;
    if ((type == 'P' || type == 'p') && (time == 'd' || time =='D') && minutes > 75) amountDue = 25.00 + 0.10 * (minutes - 75);
    if ((type == 'R' || type == 'r') && minutes <= 50) amountDue = 10.00 ;
    if ((type == 'R' || type == 'r') && minutes > 50)  amountDue = 10.00 + (minutes - 50) * 0.2 ;
    return amountDue ;
}