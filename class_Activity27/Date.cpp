//
//  Date.cpp
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#include <stdio.h>
#include "Date.h"

bool operator==(const Date& date1,const Date& date2) {
    return (date1.year == date2.year) && (date1.month == date2.month) && (date1.day == date2.day);
}

ostream& operator<<(ostream& stream, const Date& date) {
    stream << date.month << "/" << date.year << "/" << date.day;
    return stream;
};
