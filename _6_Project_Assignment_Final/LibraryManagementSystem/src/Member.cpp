#include "../headers/Member.h"
#include <iostream>

using namespace LibrarySystem;

Member::Member():Person(){
    issuedCount=0;
    bookIds=nullptr;
}

Member::Member(int i,std::string n,std::string p)
:Person(i,n,p){

    issuedCount=0;
    bookIds=nullptr;
}

Member::Member(const Member &m):Person(m){

    issuedCount=m.issuedCount;

    if(m.bookIds){

        bookIds=new int[issuedCount];

        for(int i=0;i<issuedCount;i++)
        bookIds[i]=m.bookIds[i];

    }
}

void Member::displayInfo() const{

    std::cout<<"Member ID: "<<id<<"\nName: "<<name<<"\nPhone: "<<phone<<"\n";
}

Member::~Member(){

    delete[] bookIds;
}