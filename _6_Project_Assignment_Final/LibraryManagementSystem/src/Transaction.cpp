#include "../headers/Transaction.h"

using namespace LibrarySystem;

int Transaction::nextId=1;

Transaction::Transaction(int m,int b){

    memberId=m;
    bookId=b;

    transactionId=nextId++;
}