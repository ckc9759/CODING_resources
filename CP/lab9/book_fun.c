#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{
    // implement this function as per specification in books_def.h
    BOOK new;
    new.ID=ID;
    new.shelfNum=shelfNum;
    new.price=price;
    return new;

}

void printBook(BOOK book1)
{
   // implement this function as per specification in books_def.h
   printf("Book ID : %d\n",book1.ID);
   printf("Book shelf : %d\n", book1.shelfNum);
   printf("Book price : %f\n", book1.price);
   return;
}