#include <stdio.h>
#include <stdlib.h>
struct node {
	int value;
	struct node *left;
	struct node *right;
};

struct node* newnode(int data) {
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->left = NULL;
	node->right = NULL;
	node->value=data;
	return node;
}

int main(){
	struct node *node	= newnode(1);
	node->left		= newnode(2);
	node->right		= newnode(3);
	node->left->left	= newnode(4);
	node->left->right	= newnode(5);

	getchar();
	return 0;
}
