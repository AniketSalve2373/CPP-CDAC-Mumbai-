#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

namespace LibrarySystem {

class Transaction {

private:

    static int nextId;

    int transactionId;
    int memberId;
    int bookId;

public:

    Transaction(int,int);

};

}

#endif