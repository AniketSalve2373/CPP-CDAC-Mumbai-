#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Member.h"
#include "Container.h"
#include <vector>

namespace LibrarySystem {

class Library {

private:

    Container<Book> books;
    Container<Member> members;

public:

    void addBook(Book);
    void showBooks();

};

}

#endif