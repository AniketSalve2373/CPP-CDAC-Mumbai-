#include "../headers/Librarian.h"
#include <iostream>

using namespace LibrarySystem;

Librarian::Librarian(int i,std::string n,std::string p,int e,double s)
:Person(i,n,p){

    employeeId=e;
    salary=s;
}

void Librarian::displayInfo() const{

    std::cout<<"Librarian: "<<name<<" Salary: "<<salary<<"\n";
}