#include<iostream>
using namespace std ;
string FindZodiacSign(int day , string month) ;
main()
{
    int day ;
    string month ;
    cout << "Enter the day of birth: " ;
    cin >> day ;
    cout << "Enter the month of birth (e.g., January, February): " ;
    cin >> month ;
    cout << "Zodiac Sign: " << FindZodiacSign( day , month) ;
}

string FindZodiacSign(int day , string month) 
{
    if(day >= 21 && month == "March") return "Aries" ;
    if(day <= 19 && month == "April") return "Aries" ;
    if(day >= 20 && month == "April") return "Taurus" ;
    if(day <= 20 && month == "May") return "Taurus" ;
    if(day >= 21 && month == "May") return "Gemini" ;
    if(day <= 20 && month == "June") return "Gemini" ;
    if(day >= 21 && month == "June") return "Cancer" ;
    if(day <= 22 && month == "July") return "Cancer" ;
    if(day >= 23 && month == "July") return "Leo" ;
    if(day <= 22 && month == "August") return "Leo" ;
    if(day >= 23 && month == "August") return "Virgo" ;
    if(day <= 22 && month == "September") return "Virgo" ;
    if(day >= 23 && month == "September") return "Libra" ;
    if(day <= 22 && month == "October") return "Libra" ;
    if(day >= 23 && month == "October") return "Scorpio" ;
    if(day <= 21 && month == "November") return "Scorpio" ;
    if(day >= 22 && month == "November") return "Sagittarius" ;
    if(day <= 21 && month == "December") return "Sagittarius" ;
    if(day >= 22 && month == "December") return "Capricorn" ;
    if(day <= 19 && month == "January") return "Capricorn" ;
    if(day >= 20 && month == "January") return "Aquarius" ;
    if(day <= 18 && month == "February") return "Aquarius" ;
    if(day >= 19 && month == "February") return "Pisces" ;
    if (day <= 20 && month == "March") return "Pisces" ;
}