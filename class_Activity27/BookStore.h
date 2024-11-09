//
//  BookStore.h
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//


#ifndef BookStore_h
#define BookStore_h

#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
using namespace std;

struct BookStore{
    string name;
    string owner;
    string operatingDays;
    string operatingHours;
    string address;
    string phoneNumber;
    vector<Book> booksList;
};

ostream& operator<<(ostream& stream, const BookStore& bookStore);

void addBook(BookStore& bookStore, Book& book);

#endif /* BookStore_h */
