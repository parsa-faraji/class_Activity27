//
//  Book.h
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#ifndef Book_h
#define Book_h
#include <iostream>
#include "Date.h"
using namespace std;

// create struct for book
struct Book {
    string title;
    string author;
    string ISBN;
    Date releaseDate;
    string genre;
    double price;
    int quantity;
};

// operator overloading

bool operator==(const Book& book1, const Book& book2);

ostream& operator<<(ostream& stream, const Book& book);

#endif /* Book_h */
