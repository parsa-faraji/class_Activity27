//
//  BookStore.cpp
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#include <stdio.h>
#include "BookStore.h"

// operator overloading

ostream& operator<<(ostream& stream, const BookStore& bookStore) {
    stream << "Bookstore Name: " << bookStore.name << "\n" << "Bookstore owner: " << bookStore.owner << "\n" << "Bookstore address: " << bookStore.address << "\n" << "Bookstore phone number: " << bookStore.phoneNumber << "\n" << "Bookstore operating days: " << bookStore.operatingDays << "\n" << "Bookstore operating hours: " << bookStore.operatingHours;
    stream << "\n\n" << "Available books in book list:\n";
    for (int i = 0; i < bookStore.booksList.size(); i++) {
        stream << bookStore.booksList[i];
    }
    return stream;
}

// addBook method
void addBook(BookStore& bookStore, Book& book) {
    for (int i = 0; i < bookStore.booksList.size(); i++) {
        if (bookStore.booksList[i] == book) {
            bookStore.booksList[i].quantity++;
            return;
        }
    }
    bookStore.booksList.push_back(book);
}
