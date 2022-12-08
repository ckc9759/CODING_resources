#include <stdio.h>
#include <stdlib.h>
typedef struct node * NODE;
struct node{
	int ele;
	NODE next;
};

typedef struct linked_list * LIST;
struct linked_list{
	int count;
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
	myList->count=0;
	myList->head=NULL;
	myList->math_marks=0;
	myList->phy_marks=0;
	myList->chem_marks=0;
	return myList;
}

void printList(LIST l1){
	if(l1->count==0){
		printf("List is empty !! Nothing to print\n");
	}
	NODE temp=l1->head;
	while(temp!=NULL){
		printf("%d\n",temp->Name);
		printf("%d\n",temp->ID);
		printf("%d\n",temp->Dept);
		printf("%d\n",temp->math_marks);
		printf("%d\n",temp->phy_marks);
		printf("%d\n",temp->chem_marks);
		temp=temp->next;
	}
}
