#include "../headers/Person.h"

using namespace LibrarySystem;

Person::Person()
{
    id = 0;
    name = "";
    phone = "";
}

Person::Person(int i,std::string n,std::string p)
{
    id=i;
    name=n;
    phone=p;
}

Person::~Person(){}