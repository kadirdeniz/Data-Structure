#include <stdio.h>
#include <stdlib.h>

	struct node{
		int data;
		struct node *next;
	};
	struct node *head=NULL;
	struct node *head2=NULL;
	struct node *dummy=NULL;
	struct node *a;
	struct node *b;
	
	void merge(){
		
		while(dummy->next!=NULL){
			dummy=dummy->next;
		}
		a=head;
		b=head2;
		
		struct node *eklenecek=(struct node*)malloc(sizeof(struct node));
		eklenecek->next=NULL;
		if(a->data>b->data){
			eklenecek->data=b->data;
			b=b->next;
			dummy->next=eklenecek;
			merge();
		}
		else if(a->data<b->data){
			eklenecek->data=a->data;
			a=a->next;
			dummy->next=eklenecek;
			merge();
		}
		
	}
	
	
	void add(int x,struct node *head){
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
	
		void add2(int x,struct node *head2){
		struct node *eklenecek = (struct node*)malloc(sizeof(struct node));
		eklenecek->next=NULL;
		eklenecek->data=x;
		
		if(head2==NULL){
			head2=eklenecek;
		}
		else{struct node *q=head2;
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
	
	void yazdir2(){
		struct node *k=head2;
		while(k!=NULL){
			printf("%d ->",k->data);
			k=k->next;
		}
		printf("NULL\n");
	}	
	
int main(int argc, char *argv[]) {
	
	add(5,head);
	add2(8,head2);
	add(10,head);
	add2(12,head2);
	add(15,head);
	add2(16,head2);
	yazdir();
	yazdir2();

	return 0;
}
