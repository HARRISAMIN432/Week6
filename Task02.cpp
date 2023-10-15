#include<iostream>
using namespace std ;
float calculateAverage(float marksEnglish , float marksMath , float marksChemistry , float marksSocialScience , float marksBiology) ;
string calculateGrade(float average) ;
main()
{
    string name ;
    float marksEnglish , marksMath ,  marksChemistry , marksSocialScience , marksBiology , average ;
    cout << "Enter student name: " ;
    cin >> name ;
   cout << "Enter marks for English: " ;
    cin >> marksEnglish ;
    cout << "Enter marks for Maths: " ;
    cin >> marksMath ;
    cout << "Enter marks for Chemistry: " ;
    cin >> marksChemistry ;
    cout << "Enter marks for Social Science: " ;
    cin >> marksSocialScience ;
    cout << "Enter marks for Biology: " ;
    cin >> marksBiology ;
    cout << "Student Name: " << name << endl;
    average = calculateAverage( marksEnglish , marksMath ,  marksChemistry ,  marksSocialScience ,  marksBiology) ;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << calculateGrade(average) ;
}

float calculateAverage(float marksEnglish , float marksMath , float marksChemistry , float marksSocialScience , float marksBiology) 
{
    float  percentage ;
    percentage = (marksEnglish + marksChemistry + marksBiology + marksSocialScience + marksMath)*0.2 ;
    return percentage ; 
}

string calculateGrade(float average)
{
    if (average >= 90 && average <= 100) return "A+" ;
    if (average >= 80 && average < 90 ) return "A" ;
    if (average >= 70 && average < 80) return "B+" ;
    if (average >= 60 && average < 70) return "B" ;
    if (average >= 50 && average < 60) return "C" ;
    if (average >= 40 && average < 50) return "D" ;
    if (average < 40) return "F" ;
}
    