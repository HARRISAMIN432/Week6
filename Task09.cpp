#include<iostream>
using namespace std ;
string checkPointPosition(int h, int x, int y) ;
main()
{
    int h,x,y ;
    cout << "Enter height: " ;
    cin >> h ;
    cout << "Enter x coordinate: " ;
    cin >> x ;
    cout << "Enter y coordinate: " ;
    cin >> y ;
    cout << checkPointPosition(h,x,y) ;
}

string checkPointPosition(int h , int x , int y) 
{
    int hX , hY ;
    hX = h*2 ;
    hY = h*4 ;
    if(x > 0 && x < hX && y > 0 && y < hY) return "Inside" ;
    if(x == 0 || y == 0 || x == hX || y == hY) return "Border" ;
    return "Outside" ;
}