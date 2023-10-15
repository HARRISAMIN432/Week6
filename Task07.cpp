#include<iostream>
using namespace std ;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) ;
main()
{
    int examHour, examMinute,  studentHour,  studentMinute ;
    cout << "Enter Exam Starting Time (hour): " ;
    cin >> examHour ;
    cout << "Enter Exam Starting Time (minutes): " ;
    cin >> examMinute ;
    cout << "Enter Student hour of arrival: " ;
    cin >> studentHour ;
    cout << "Enter Student minutes of arrival: " ;
    cin >> studentMinute ;
    cout << checkStudentStatus( examHour, examMinute, studentHour,  studentMinute) ;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) 
{
    int totalMinutesForExamTime , totalMinutesForStudent ,hours , minutes , timeDifference ;
    totalMinutesForExamTime = examHour*60 + examMinute ;
    totalMinutesForStudent = studentHour*60 + studentMinute ;
    timeDifference = totalMinutesForExamTime - totalMinutesForStudent ;
    hours = timeDifference / 60 ;
    minutes = timeDifference % 60 ;
    if(timeDifference > 0 && timeDifference <= 30) return "On time\n"+to_string(minutes)+" minutes before the start" ;
    if(timeDifference == 0) return "On time" ;
    if(timeDifference > 30 && timeDifference < 60) return "Early\n"+to_string(minutes)+" minutes before the start" ;
    if(timeDifference > 60 ) return "Early\n"+to_string(hours)+":"+to_string(minutes)+" hours before the start" ;
    if(timeDifference < 0 && timeDifference > -60) 
    {
        minutes *= -1 ;
        return "Late\n"+to_string(minutes)+" minutes after the start" ;
    }
    if(timeDifference <= -60)
    {
        minutes *= -1 ;
        hours *= -1 ; 
        return "Late\n"+to_string(hours)+":"+to_string(minutes)+" hours after the start" ;
    }    
}