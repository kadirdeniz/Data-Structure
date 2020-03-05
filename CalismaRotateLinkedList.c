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
	
	void rotate(int k){
		struct node *current=head;
		int count=1;
		while(count<k && current!=NULL){
			current=current->next;
			count++;
		}
		struct node *kthnode=current;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=head;
		head=kthnode->next;
		kthnode->next=NULL;
		
	}

int main(int argc, char *argv[]) {
	add(1);
	add(2);
	add(3);
	add(4);
	add(5);
	add(6);
	yazdir();
	rotate(3);
	yazdir();
	return 0;
}
