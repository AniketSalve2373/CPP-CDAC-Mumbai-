#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "Person.h"

namespace LibrarySystem {

class Librarian : public Person {

private:
    int employeeId;
    double salary;

public:

    Librarian(int,std::string,std::string,int,double);

    void displayInfo() const override;

};

}

#endif