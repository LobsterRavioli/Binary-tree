#include<stdio.h>
#include<stdlib.h>
#include"item.h"
#include"Btree.h"

typedef struct node
{
	item val;
	struct node *left;
	struct node *right;
}node;

item getItem(node *N);
void seiItem(node *N,item el);

item getItem(node *N)
{
	if(N == NULL)
		return NULLITEM;
	return N->val;
}

void setItem(node *N,item el)
{
	if(N == NULL)
		return ;
	N->val = el;
}

Btree newBtree(void)
{
	return NULL;
}

int emptyBtree(Btree T)
{
	return T == NULL;

}

struct node *getRoot(Btree T)
{
	return T;
}

Btree consBtree(item val,Btree sx,Btree dx)
{
	struct node *nuovo;
	nuovo = malloc(sizeof(struct node));
	if(nuovo != NULL)
	{
		setItem(nuovo,val);
		nuovo->left = sx;
		nuovo->right = dx;
	}
	return nuovo;
}

Btree figlioSX(Btree T)
{
	if(T != NULL)
		return T->left;
	else 
		return NULL;

}

Btree figlioDx(Btree T)
{
	if( T != NULL)
		return T->right;
	else 
		return NULL;
}

