#include<iostream>
using namespace std ;
string calculateHotelPrices(string month , int numberOfStays  ) ;
main()
{
    string month ;
    int numberOfStays ;
    cout << "Enter the month (May, June, July, August, September, October): " ;
    cin >> month ;
    cout << "Enter the number of stays: " ;
    cin >> numberOfStays ;
    cout << calculateHotelPrices( month ,  numberOfStays  ) ;
}

string calculateHotelPrices(string month , int numberOfStays  ) 
{
    double studioPrice , apartmentPrice ;
    if((month == "May" || month == "October"))
    {
        studioPrice = 50 * numberOfStays ;
        apartmentPrice =  65 * numberOfStays ;
    }
    if((month == "June" || month == "September"))
    {
        studioPrice = 75.20 * numberOfStays ;
        apartmentPrice =  68.70 * numberOfStays ;
    }
    if((month == "July" || month == "August"))
    {
        studioPrice = 76 * numberOfStays;
        apartmentPrice =  77 *  numberOfStays ;
    }
    if((month == "May" || month == "October") && numberOfStays > 7 && numberOfStays <= 14) studioPrice = studioPrice - studioPrice * 0.05 ;
    if((month == "May" || month == "October") && numberOfStays> 14) studioPrice = studioPrice - studioPrice * 0.30 ;
    if((month == "June" || month == "September") && numberOfStays > 14) studioPrice = studioPrice - studioPrice * 0.20 ; 
    if(numberOfStays > 14) apartmentPrice = apartmentPrice - apartmentPrice * 0.10 ;
    return "Apartment: " + to_string(apartmentPrice) + "$." "\n" "Studio: " + to_string(studioPrice) + "$." ;
}