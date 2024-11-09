//
//  main.cpp
//  class_Activity27
//
//  Created by Parsa Faraji on 11/8/24.
//

#include <iostream>
#include "BookStore.h"
#include "Book.h"
#include "Date.h"

int main() {
    // initialize BookStore struct
    BookStore bookStore1 =  {"Jacksonville", "Sir Isaac", "MWF", "8AM-8PM", "21 Baker St.", "5109124123"
    };
    // initialize Date object
    Date date = {2024, 12, 12};
    
    // initialize Book struct
    Book book1 = {"Moby-Dick", "Herman Melville", "1241252", date, "Classic", 12.5};
    
    //
    addBook(bookStore1, book1);
    cout << bookStore1;

}
