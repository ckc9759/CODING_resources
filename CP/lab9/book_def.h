#ifndef BOOK_H
#define BOOK_H

#include <stdio.h>

typedef enum shelf{Shelf1=1,Shelf2=2,Shelf3=3,Shelf4=4} SHELF;

typedef struct book{
    int ID;    
    SHELF shelfNum;
    float price;
} BOOK;


// the function should create a new variable of the type struct book (typdefed as BOOK) and return it.
BOOK newBook(int ID, SHELF shelfNum, float price);

// this function should print the members of book1 (passed as parameter)
void printBook(BOOK book1);

#endif