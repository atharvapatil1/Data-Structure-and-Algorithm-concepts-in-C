#include<stdio.h>
#include<stdlib.h>

struct bintree
{
	int info;
	struct bintree *left;
	struct bintree *right;
};

int count=0;
int flag = 0;

int main()
{
	struct bintree *root,*p;
	int ch,x,key;
	char ans;
	struct bintree * insert(struct bintree *,int);
	void traverse(struct bintree *);
	int flag=0;
	root = NULL;
	do
	{
		printf("\n\n1.Insert a Node \t 2.Traverse \t 3.No of Nodes \t 4.Exit   ");
		printf("\nEnter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\t\tEnter the information::");
				scanf("%d",&x);
				root = insert(root,x);
				break;
			case 2:
				traverse(root);
				break;
			case 3:
				count = 0;
				traverse(root);
				printf("\t\tThe no of nodes = %d",count);
				break;
			case 4:
				printf("\t\tTerminating...!!!!");
				flag++;
			default :
				printf("\t\tInvalid choice ");
		}
	}while(flag==0);
	getch();
}

struct bintree * insert(struct bintree *root,int x)
{
	struct bintree *p,*q,*curr;
	curr = (struct bintree *)malloc(sizeof(struct bintree));
	curr->info = x;
	curr->left=NULL;
	curr->right=NULL;
	p=q=root;
	if(root == NULL)
	{
		root = curr;
		printf("\t\t%d Is inserted at root position ",curr->info);
		return root;
	}
	while(q != NULL)
	{
		p = q;
		if(x < p->info)
		q = p->left;
		else
		q = p->right;
	}
	if(x < p->info)
	{
		printf("\t\tThe node is inserted at %d‟s left",p->info);
		p->left = curr;
	}
	else
	{
		printf("\t\tThe node is inserted at %d‟s right",p->info);
		p->right = curr;
	}
	return root;
}

void traverse(struct bintree *root)
{
	if(root != NULL)
	{
		traverse(root->left);
		printf(" %d",root->info);
		count++;
		traverse(root->right);
	}
}

