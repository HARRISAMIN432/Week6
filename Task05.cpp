#include<iostream>
using namespace std ;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity) ;
main()
{
    string fruit , dayOfWeek ;
    double quantity ;
    cout << "Enter the fruit name: " ;
    cin >> fruit ;
    cout << "Enter the day of the week (e.g., Monday, Sunday): " ;
    cin >> dayOfWeek ;
    cout << "Enter the quantity: " ;
    cin >> quantity ;
    if (fruit!="banana"&&fruit!="apple"&&fruit!="orange"&&fruit!="grapefruit"&&fruit!="kiwi"&&fruit!="pineapple"&&fruit!="grapes") 
    {
        cout << "error" ;
        return 0 ;
    }
    if (dayOfWeek!="Monday"&&dayOfWeek!="Tuesday"&&dayOfWeek!="Wednesday"&&dayOfWeek!="Thursday"&&dayOfWeek!="Friday"&&dayOfWeek!="Saturday"&&dayOfWeek!="Sunday")
    {
     cout << "error" ;
     return 0 ;
    } 
    cout <<  calculateFruitPrice( fruit, dayOfWeek, quantity) ;
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float price ;
    if(fruit == "banana" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 2.70 ;
    if(fruit == "banana" && !(dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 2.50 ;
    if(fruit == "apple" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 1.25 ;
    if(fruit == "apple" && !(dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 1.20 ;
    if(fruit == "orange" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 0.90 ;
    if(fruit == "orange" && !(dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 0.85 ;
    if(fruit == "grapefruit" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 1.60 ;
    if(fruit == "grapefruit" && !(dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 1.45 ;
    if(fruit == "kiwi" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 3.00 ;
    if(fruit == "kiwi" && !(dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 2.70 ;
    if(fruit == "pineapple" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 5.60 ;
    if(fruit == "pineapple" && !(dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 5.50 ;
    if(fruit == "grapes" && (dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 4.20 ;
    if(fruit == "grapes" && !(dayOfWeek == "Saturday" || dayOfWeek == "Sunday" )) price = quantity * 3.85 ;
     return price ;
}
