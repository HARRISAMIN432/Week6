#include<iostream>
#include<cmath> 
using namespace std ;
int calculateVolleyBallGames(string yearType , int holidays , int homeTownWeekends) ;
main()
{
    int holidays , homeTownWeekends ;
    string yearType ;
    cout << "Enter year type: " ;
    cin >> yearType ;
    cout << "Enter number of holidays: " ;
    cin >> holidays ;
    cout << "Enter number of weekends: " ;
    cin >> homeTownWeekends ;
    cout << calculateVolleyBallGames( yearType , holidays , homeTownWeekends) ;
}

int calculateVolleyBallGames(string yearType , int holidays , int homeTownWeekends) 
{
    float weekendInSofia , volleyBallGames ;
    weekendInSofia = 48 - homeTownWeekends ;
    volleyBallGames = (weekendInSofia*(0.75) + holidays*(0.67) + homeTownWeekends) ;
    if(yearType == "leap") volleyBallGames += (volleyBallGames*0.15) ;
    if(yearType == "normal") volleyBallGames = volleyBallGames ;
    floor(volleyBallGames) ;
    return volleyBallGames ; 
}