#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *q=NULL;
struct node *head=NULL;

void addbegin(int x){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->next=NULL;
	temp->data=x;
	
	if(head==NULL){
		head=temp;
	}
	else{
		temp->next=head;
		head=temp;
	}
}

void addlast(int x){
	q=head;
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->next=NULL;
	temp->data=x;
	
	if(head==NULL){
		head=temp;
	}
	else{
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=temp;
	}
}

void addaraya(int x,int y){
	q=head;
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->next=NULL;
	temp->data=x;
	if(head==NULL){
		head=temp;
	}
	else{
		while(q->data!=y){
			q=q->next;
		}
		temp->next=q->next;
		q->next=temp;
	}
}

void yazdir(){
	q=head;
	while(q!=NULL){
		printf("%d->",q->data);
		q=q->next;
	}printf("NULL\n");
}
void deletefirst(){
	q=head;
	head=head->next;
	free(q);
}
void deletelast(){
	q=head;
	
	while(q->next->next!=NULL){
		q=q->next;
	}
	free(q->next);
	q->next=NULL;
}
void deleteara(int x){
	q=head;
	while(q->next->data!=x){
		q=q->next;
	}
	struct node *ilk=q;
	struct node *son=q->next->next;
	free(q->next);
	ilk->next=son;

}
void length(){
	q=head;
	int count=0;
	while(q!=NULL){
		count++;
		q=q->next;
	}
	printf("\nLength of Linked List : %d\n",count);
}

void swap(int x,int y){
	struct node *xprev=NULL;
	struct node *xpoint=NULL;
	struct node *xnext=NULL;
	
	struct node *yprev=NULL;
	struct node *ypoint=NULL;
	struct node *ynext=NULL;	
	q=head;
	while(q->next->data!=x){
		q=q->next;
	}
	xprev=q;
	xpoint=xprev->next;
	xnext=xpoint->next;
	
	q=head;
	while(q->next->data!=y){
		q=q->next;
	}
	yprev=q;
	ypoint=yprev->next;
	ynext=ypoint->next;
	
	xprev->next=ypoint;
	ypoint->next=xnext;
	yprev->next=xpoint;
	xpoint->next=ynext;
}
void reverse(){
	struct node *current=head;
	struct node *next=NULL;
	struct node *prev=NULL;

	while(current!=NULL){
		next=current->next;
		current->next= prev;
		prev = current;
		current = next;
	}
	head = prev;
}
void rotate(int k){
	q=head;
	int count=1;
	struct node *kthnode=NULL;
	while(count<k&&q!=NULL){
		q=q->next;
		count++;
	}
	kthnode=q;
	while(q->next!=NULL){
		q=q->next;
	}
	q->next=head;
	head=kthnode->next;
	kthnode->next=NULL;
}


int main(int argc, char *argv[]) {
	
	addbegin(1);
	addbegin(2);
	addbegin(3);
	addbegin(4);
	addbegin(10);
	
	
	
	
	return 0;
}
