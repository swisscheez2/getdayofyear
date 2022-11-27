// getdayofyear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string>


// get day of year as String

std::string GetDayofYearStr() {
    struct tm  when;
    __time64_t now, result;
    int        days;
    char       buff[80];
    time(&now);
    _localtime64_s(&when, &now);
    asctime_s(buff, sizeof(buff), &when);
   
    if (result = mktime(&when)) {
        asctime_s(buff, sizeof(buff), &when);
     
        return std::to_string(when.tm_yday);
    }
    else
        perror("mktime failed");
}


// get Current day of year as Int

int GetDayofYearInt() {
    struct tm  when;
    __time64_t now, result;
    int        days;
    char       buff[80];
    time(&now);
    _localtime64_s(&when, &now);
    asctime_s(buff, sizeof(buff), &when);
    if (result = mktime(&when)) {
        return when.tm_yday;
    }
    else
        perror("mktime failed");

    return 0;

}


int main()
{
   
    std::cout << GetDayofYearStr();
   
}

