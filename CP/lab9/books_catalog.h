#ifndef BOOKS_CATALOG_H
#define BOOKS_CATALOG_H

#include "book_def.h"

#define MAX_SIZE 100

BOOK booksCatalog[MAX_SIZE];
int count;

// This function should take an input parameter of the type struct book (typdefed as BOOK)
// and it to the booksCatalog array at position count. Then, count should be incremented.
void addBookToCatalog(BOOK book1);


// This function should print all the books that are added to booksCatalog array.
// It should use the printBook() function defined in "book_def.h"
void printBookCatalog();


// This function should sort the booksCatalog array based on the ID of the book.
void sortBookCatalogOnID();

#endif