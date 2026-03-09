#include "../headers/Book.h"

using namespace LibrarySystem;

Book::Book(){}

Book::Book(int id,std::string t,std::string a,std::string i,int q){

    bookId=id;
    title=t;
    author=a;
    isbn=i;
    quantity=q;
    status=AVAILABLE;
}

void Book::display() const{

    std::cout<<bookId<<" "<<title<<" "<<author<<" "<<quantity<<"\n";
}

int Book::getId() const{

    return bookId;
}