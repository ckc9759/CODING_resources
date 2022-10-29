#include "books_catalog.h"

void addBookToCatalog(BOOK book1)
{
    // implement this function as per specification in books_catalog.h
    booksCatalog[count].ID=book1.ID;
    booksCatalog[count].shelfNum=book1.shelfNum;
    booksCatalog[count].price=book1.price;
    count++;
    return;
    
}

void printBookCatalog()
{
    // implement this function as per specification in books_catalog.h
    for(int i=0;i<count;i++){
    	printBook(booksCatalog[i]);
    }
    return;
}

void sortBookCatalogOnID()
{
    // implement this function as per specification in books_catalog.h
    int i,j;
    int n=count;
    for(int i=0;i<n-1;i++){
    	for(int j=0;j<n-i-1;j++){
    		if(booksCatalog[j].ID>booksCatalog[j+1].ID){
    			BOOK c = booksCatalog[j];
    			BOOK d = booksCatalog[j+1];
    			booksCatalog[j+1]=c;
    			booksCatalog[j]=d;
    		}
    	}
    }
    return;
}