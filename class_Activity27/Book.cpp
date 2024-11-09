//
//  Book.cpp
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#include <stdio.h>
#include "Book.h"
using namespace std;

bool operator==(const Book& book1,const Book& book2) {
    return (book1.title == book2.title) && (book1.author == book2.author) && (book1.ISBN == book2.ISBN) && (book1.genre == book2.genre) && (book1.price == book2.price) && (book1.releaseDate == book2.releaseDate);
}

ostream& operator<<(ostream& stream, const Book& book) {
    stream << book.title << " " << book.author << " " << book.releaseDate << " " << book.ISBN << " " << book.genre << " " << book.price;
    return stream;
}
