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

// create bookstore structure
struct BookStore{
    
    //attributes
    string name;
    string owner;
    string operatingDays;
    string operatingHours;
    string address;
    string phoneNumber;
    vector<Book> booksList;
};

// operator overloading for output
ostream& operator<<(ostream& stream, const BookStore& bookStore);

// addBook method
void addBook(BookStore& bookStore, Book& book);

#endif /* BookStore_h */
