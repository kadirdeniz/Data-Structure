#include <stdio.h>
#include <stdlib.h>

	struct node{
		int data;
		struct node *next;
	};
	struct node *head=NULL;
	struct node *a=NULL;
	struct node *head2=NULL;
	struct node *b=NULL;
	
	struct node *head3=NULL;
	struct node *tail=NULL;
	struct node *temp=NULL;
	
	void add1(int x){
		struct node *eklenecek = (struct node*)malloc(sizeof(struct node));
		eklenecek->next=NULL;
		eklenecek->data=x;
		
		if(head==NULL){
			head=eklenecek;
		}
		else{
		struct node *q=head;
			while(q->next!=NULL){
				q=q->next;
			}
			q->next=eklenecek;
		}
	}
	
	void add2(int x){
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
		struct node *q=head2;
		while(q!=NULL){
			printf("%d ->",q->data);
			q=q->next;
		}
		printf("NULL\n");
	}
	
	void yazdir3(){
		struct node *q=head3;
		while(q!=NULL){
			printf("%d ->",q->data);
			q=q->next;
		}
		printf("NULL\n");
	}
	
	void merge(){
		a=head;
		b=head2;
		tail=head3;
		while(a!=NULL && b!=NULL){
			if(a->data>b->data){
				temp=(struct node*)malloc(sizeof(struct node));
				temp->data=b->data;
				temp->next=NULL;
				if(head3==NULL){
					head3=temp;
				}
				else{
					struct node *q=tail;
					while(q->next!=NULL){
						q=tail->next;
					}
					q->next=temp;
				}
				tail=tail->next;
				printf("%d",tail);
			}
		}
		
	}
int main(int argc, char *argv[]) {
	add1(10);
	add1(9);
	add1(8);
	add1(7);
	add1(6);
	add2(5);
	add2(4);
	add2(3);
	add2(2);
	add2(1);
	yazdir();
	yazdir2();
	merge();
	yazdir3();
	return 0;
}
