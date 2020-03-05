#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *q;
struct node *head;

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
void reverse(){
	struct node *pnext=NULL;
	struct node *prev=NULL;
	struct node *curr=head;
	while(curr!=NULL){
		pnext=curr->next;
		curr->next=prev;
		prev=curr;
		curr=pnext;
	}
	head=prev;
}

void reversegiven(int k){
	int count = 0;
	struct node *pnext=NULL;
	struct node *prev=NULL;
	struct node *curr=head;
	while(curr!=NULL && count < k){
		pnext=curr->next;
		curr->next=prev;
		prev=curr;
		curr=pnext;
		count++;
	}

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
	reverse();
	yazdir();
	return 0;
}
