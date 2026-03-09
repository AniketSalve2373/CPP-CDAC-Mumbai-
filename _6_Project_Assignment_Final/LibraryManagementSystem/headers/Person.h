#ifndef PERSON_H
#define PERSON_H

#include <string>

namespace LibrarySystem {

class Person {

protected:
    int id;
    std::string name;
    std::string phone;

public:

    Person();   // default constructor
    Person(int i,std::string n,std::string p);

    virtual void displayInfo() const = 0;

    virtual ~Person();
};

}

#endif