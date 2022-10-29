#include "books_catalog.h"
#include "book_def.h"

int main()
{
    count = 0;
    BOOK book1 = newBook(1847, Shelf3, 8768.95);
    BOOK book2 = newBook(5984, Shelf1, 7845.25);
    BOOK book3 = newBook(6325, Shelf2, 3154.47);
    BOOK book4 = newBook(5843, Shelf2, 1487.51);
    BOOK book5 = newBook(7894, Shelf2, 541.29);
    // printBook(book1); 

    // adding book1 to catalog of books
    addBookToCatalog(book1);
    addBookToCatalog(book2);
    addBookToCatalog(book3);
    addBookToCatalog(book4);
    addBookToCatalog(book5);

    printBookCatalog();

    sortBookCatalogOnID();

printf(" \n");
    printf("After Sorting\n");
    printf(" \n");

    printBookCatalog();

    return 0;
}