#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}node;

node *createnode(int value){
	node *newnode =(node *)malloc(sizeof(node *));
	newnode->data=value;
	newnode->left = newnode->right=NULL;
	return newnode;
}

node *insert(struct node *node,int value){
	if(node==NULL){   
		return createnode(value);
	}
	if(value < node->data){                                                                                                                        
		node->left = insert(node->left,value);
	}
	else{
		node->right = insert(node->right,value);
	}
	return node;
}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d-->",root->data);
		inorder(root->right);
	}
}
                                                                                          
int main(){
	 node *root=NULL;
	int i;                                                                                                                              
	int arr[]={23, 2, 45,1, 8, 12, 10, 6, 43, 20, 18, 37, 30, 27, 11, 10};
	int len=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++){
		root = insert(root,arr[i]);
	}
	printf("Inorder Traversal\n");
	inorder(root);
	
	return 0;
}
