#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;
struct node *q;
struct node *xprev=NULL;
struct node *xpoint=NULL;
struct node *xnext=NULL;
struct node *yprev=NULL;
struct node *ypoint=NULL;
struct node *ynext=NULL;
void add(int x){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;	
	
	if(head==NULL){
		head=temp;
	}
	
	else{
		temp->next=head;
		head=temp;
	}
}

void yazdir(){
	q=head;
	while(q!=NULL){
		printf("%d ->",q->data);
		q=q->next;
	}printf("NULL\n");
}

void swap(int xdata,int ydata){

	
	q=head;
	while(q->data!=xdata){
		q=q->next;	
	}
	xpoint=q;
	xnext=xpoint->next;
	q=head;
	while(q->next->data!=xdata){
		q=q->next;
	}
	xprev=q;
	q=head;
	while(q->data!=ydata){
		q=q->next;
	}
	ypoint=q;
	ynext=q->next;
	q=head;
	while(q->next->data!=ydata){
		q=q->next;
	}
	yprev=q;
	
	xprev->next=ypoint;
	ypoint->next=xnext;
	yprev->next=xpoint;
	xpoint->next=ynext;

	
	
	
}

int main(int argc, char *argv[]) {
	
	add(10);
	add(9);
	add(8);
	add(7);
	add(6);
	add(5);
	add(4);
	add(3);
	add(2);
	add(1);
	add(0);
	yazdir();
	swap(5,8);
	yazdir();

	return 0;
}
