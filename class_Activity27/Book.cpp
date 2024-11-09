//
//  Book.cpp
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#include <stdio.h>
#include "Book.h"
using namespace std;

// operator overloading

bool operator==(const Book& book1,const Book& book2) {
    return (book1.title == book2.title) && (book1.author == book2.author) && (book1.ISBN == book2.ISBN) && (book1.genre == book2.genre) && (book1.price == book2.price) && (book1.releaseDate == book2.releaseDate);
}

ostream& operator<<(ostream& stream, const Book& book) {
    stream << "Book title: " << book.title << "\n" << "Book author: " << book.author << "\n" << "Book Release Date: " << book.releaseDate << "\n" << "Book ISBN: " << book.ISBN << "\n" << "Book Genre: " << book.genre << "\n" << "Book Price: " << book.price << "\n" << "Book quantity: " << book.quantity;
    
    return stream;
}
