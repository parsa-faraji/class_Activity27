//
//  BookStore.cpp
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#include <stdio.h>
#include "BookStore.h"


ostream& operator<<(ostream& stream, const BookStore& bookStore) {
    stream << bookStore.name << bookStore.owner << bookStore.address << bookStore.phoneNumber << bookStore.operatingDays << bookStore.operatingHours;
    for (int i = 0; i < bookStore.booksList.size(); i++) {
        stream << bookStore.booksList[i];
    }
    return stream;
}

void addBook(BookStore& bookStore, Book& book) {
    for (int i = 0; i < bookStore.booksList.size(); i++) {
        if (bookStore.booksList[i] == book)
            return;
    }
    bookStore.booksList.push_back(book);
}
