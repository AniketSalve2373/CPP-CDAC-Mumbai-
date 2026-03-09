#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

namespace LibrarySystem {

enum BookStatus {AVAILABLE,ISSUED};

class Book {

private:

    int bookId;
    std::string title;
    std::string author;
    std::string isbn;
    BookStatus status;
    int quantity;

public:

    Book();
    Book(int,std::string,std::string,std::string,int);

    void display() const;

    int getId() const;

};

}

#endif