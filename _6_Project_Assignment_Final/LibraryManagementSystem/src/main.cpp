#include "../headers/Library.h"

using namespace LibrarySystem;

int main(){

    Library lib;

    int choice;

    while(true){

        std::cout<<"\n1 Add Book\n";
        std::cout<<"2 Show Books\n";
        std::cout<<"0 Exit\n";

        std::cin>>choice;

        if(choice==1){

            int id,q;
            std::string t,a,i;

            std::cout<<"Enter id title author isbn quantity\n";
            std::cin>>id>>t>>a>>i>>q;

            Book b(id,t,a,i,q);

            lib.addBook(b);
        }

        else if(choice==2){

            lib.showBooks();
        }

        else if(choice==0){

            break;
        }
    }
}