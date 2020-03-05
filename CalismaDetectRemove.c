#include <stdio.h>
#include <stdlib.h>

	struct node{
		int data;
		struct node *next;
	};
	struct node *head=NULL;
	struct node *q=NULL;
	void add(int x){
		struct node *eklenecek = (struct node*)malloc(sizeof(struct node));
		eklenecek->next=NULL;
		eklenecek->data=x;
		
		if(head==NULL){
			head=eklenecek;
		}
		else{struct node *q=head;
			while(q->next!=NULL){
				q=q->next;
			}
			q->next=eklenecek;
		}
	}
	

	void yazdir(){
		struct node *q=head;
		while(q!=NULL){
			printf("%d ->",q->data);
			q=q->next;
		}
		printf("NULL\n");
	}
	
	void detectloop(){
		struct node *slowptr=head;
		struct node *fastptr=head;
		while(slowptr&&fastptr){
			slowptr=slowptr->next;
			fastptr=fastptr->next;
			if(slowptr==fastptr){
				removeloop();
			}
		}
	}
	void removeloop(){
		struct node *ptr1=head;
		struct node *ptr2=NULL;
		while(1){
			
		}
	}
int main(int argc, char *argv[]) {
	add(5);
	add(4);
	add(3);
	add(2);
	add(1);
	q=head;
	while(q->next!=NULL){
		q=q->next;
	}
	q->next=head->next;
	yazdir();
	detectloop();
	
	return 0;
}
