#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *q=NULL;
struct node *head=NULL;


void basaekle(int x){
	
	struct node *eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek->data=x;
	eklenecek->next=NULL;
	
	if(head==NULL){
		head=eklenecek;
		
		
	}
	else{
		eklenecek->next=head;
		head=eklenecek;
	}
	
}

void sonaekle(int x){
	struct node *eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek->data=x;
	eklenecek->next=NULL;
	
	if(head==NULL){
		head=eklenecek;
	}
	else{
	q=head;
		while(q->next!=NULL){
			q=q->next;
		}q->next=eklenecek;
	}
}

void arayaekle(int x,int y){
	struct node *eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek->data=x;
	eklenecek->next=NULL;
	if(head==NULL){
		head=eklenecek;
	}
	else{
		q=head;
		while(q->data!=y){
			q=q->next;
		}
		eklenecek->next=q->next;
		q->next=eklenecek;
	}
}
void deletionkey(int x){
	q=head;
	while(q->next->data=x){
		q=q->next;
	}
	q->next=q->next->next;
	free(q->next);
	
}
void bastansil(){
	q=head;
	head=head->next;
	free(q);
}
void sondansil(){
	q=head;
	while(q->next->next!=NULL){
		q=q->next;
	}
	q->next=NULL;
	free(q->next);
}
void aradansil(int x){
	q=head;
	while(q->next->data!=x){
		q=q->next;
	}
	struct node *onceki=NULL;
	struct node *sonraki=NULL;
	onceki=q;
	sonraki=q->next->next;
		free(q->next);
	onceki->next=sonraki;

	
}
void findlenght(){
	int count=1;
	q=head;
	while(q->next!=NULL){
		count++;
		q=q->next;
	}
printf("%d\n",count);
}

void reverse(){
	q=head;
	struct node *current=head;
	struct node *next=NULL;
	struct node *prev=NULL;
	
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}head=prev;
	
	
}

int lenghtrec(struct node *head){
	if(head==NULL){
		return 0;	
	}
	return 1 + lenghtrec(head->next);
	
}

void yazdir(){
	q=head;
	while(q!=NULL){
		printf("%d ->",q->data);
		q=q->next;
	}printf("NULL\n");
}

int main(int argc, char *argv[]) {
	basaekle(30);
	basaekle(20);
	basaekle(10);
	sonaekle(40);
	arayaekle(25,20);
	bastansil();
	sondansil();
	aradansil(25);

	findlenght();
	yazdir();
	reverse();
	yazdir();
	
	printf("%d",lenghtrec(head));
	
	return 0;
}
