#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
}
struct node *insert(struct node* node, int key) 
{ 
    if (node == NULL) return newNode(key); 
  
    if (key < node->data) 
        node->left  = insert(node->left, key); 
    else if (key > node->data) 
        node->right = insert(node->right, key);    
    return node; 
} 
void minValue(struct node* node) { 
  struct node* current = node; 
  while (current->left != NULL) { 
    current = current->left; 
  } 
  printf("%d",current->data);
} 

void preorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        printf("%d ", root->data);
        preorder(root->left);  
        preorder(root->right); 
    } 
} 



void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d ", root->data); 
        inorder(root->right); 
    } 
} 



void postorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        postorder(root->left);  
        postorder(root->right); 
        printf("%d ", root->data);
    } 
} 

int main(int argc, char *argv[]) {
	struct node *root=NULL;
	root=insert(root,50);
	insert(root,60);
	insert(root,70);
	insert(root,40);
	insert(root,30);
	insert(root,80);	
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	return 0;
}


