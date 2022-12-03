
#include <stdio.h>

typedef struct node * NODE;
struct node{
	int ele;
	NODE next;
};

typedef struct linked_list * LIST;
struct linked_list{
	char ID[30];
	char Name[50];
	char Dept[50];
	int math_marks;
	int phy_marks;
	int chem_marks;
	NODE head;
};

LIST createNewList(){
	LIST myList;
	myList = (LIST) malloc(sizeof(struct linked_list));
// myList = (LIST) malloc(sizeof(*myList));
	myList->ID=NULL;
	myList->Name=NULL;
	myList->Dept=NULL;
	myList->math_marks=0;
	myList->phy_marks=0;
	myList->chem_marks=0;
	return myList;
}
