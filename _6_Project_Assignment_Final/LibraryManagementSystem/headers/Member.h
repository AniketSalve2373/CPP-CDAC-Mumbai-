#ifndef MEMBER_H
#define MEMBER_H

#include "Person.h"

namespace LibrarySystem {

class Member : public Person {

private:
    int issuedCount;
    int *bookIds;

public:

    Member();
    Member(int,std::string,std::string);

    Member(const Member&);

    void displayInfo() const override;

    ~Member();
};

}

#endif