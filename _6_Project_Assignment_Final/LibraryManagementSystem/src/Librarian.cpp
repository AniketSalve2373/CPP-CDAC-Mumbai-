#include "../headers/Library.h"

using namespace LibrarySystem;

void Library::addBook(Book b){

    books.add(b);
}

void Library::showBooks(){

    for(int i=0;i<books.getSize();i++)
    books[i].display();
}