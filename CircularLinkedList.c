#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct node{
		int data;
		struct node *next;
	};
	struct node *head;
	struct node *q;
	void addbegin(int x){
		
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=x;
		temp->next=head;
		
		if(head==NULL){
			head=temp;
		}
		else{
			temp->next=head;
			head=temp;
			
		}		
	}
	
	void addend(int x){
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=x;
		temp->next=head;
		if(head==NULL){
			head=temp;
		}
		else{
		q=head;	
		while(q->next!=head){
			q=q->next;
		}
		q->next=temp;
			
		}
	}
	
	void display(){
		q=head;
		while(q->next!=head){
			printf("%d ->",q->data);
			q=q->next;
		}printf("NULL");
	}

int main(int argc, char *argv[]) {
	addend(10);
	addend(30);
	addend(40);
	addend(50);
	addend(10);
	addend(20);
	addend(30);
	addend(40);
	addend(50);	
	display();
	
	
	return 0;
}
