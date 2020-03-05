#include <stdio.h>
#include <stdlib.h>

	struct node{
		int data;
		struct node *next;
	};
	struct node *head=NULL;
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
	
	
		void reverse(struct node *head){
		struct node *curr=head;
		struct node *prev=NULL;
		struct node *next=NULL;
		
		while(curr!=NULL){
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}	
		head=prev;
	}

int main(int argc, char *argv[]) {
	
	
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	yazdir();
	reverse(head);
	yazdir();
	
	
	return 0;
}
