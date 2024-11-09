//
//  Date.h
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#ifndef Date_h
#define Date_h
#include <iostream>
using namespace std;

// create structure for date

struct Date {
    int year;
    int month;
    int day;
};

// operator overloading

bool operator==(const Date& date1, const Date& date2);

ostream& operator<<(ostream& stream, const Date& date);

#endif /* Date_h */
