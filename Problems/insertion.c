INSERT AT BEGINNING, AT POSITION AND AT END:

#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;

struct node* getnewnode(int val)
{
	struct node* temp;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data =val;
	temp->next= NULL;
	return temp;
}

insertbeg(int val)
{
	struct node* ptr;
	ptr=getnewnode(val);
	ptr->next=head;
	head= ptr;
}

insertend(int val)
{
	struct node* ptr;
	ptr=getnewnode(val);
	
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
	struct node* run;
	run=head;
	while(run->next!=NULL)
	{
		run=run->next;	
	}
	  run->next=ptr;
  }
}

insertatpos(int val,int pos)
{
	struct node* ptr;
	ptr=getnewnode(val);
	
	struct node* run;
	run=head;
	int i;
  
	for(i=0; i<pos-1; i++)
	{
		run=run->next;
	}
	ptr->next=run->next;
	run->next=ptr;
}

print()
{
	struct node* run;
	run= head;
	while(run!=NULL)
	{
		printf("%d ->", run->data);
		run=run->next;
	}
	printf("\n");
}

void main()
{
	insertend(19);
	insertbeg(2);
	insertbeg(5);
	insertbeg(8);
	print(); 
	insertend(9); 
	insertbeg(15);
	insertend(6);
	print(); 
	insertatpos(3,3);
	print();
}

#OUTPUT:
8 ->5 ->2 ->19 ->
15 ->8 ->5 ->2 ->19 ->9 ->6 ->
15 ->8 ->5 ->3 ->2 ->19 ->9 ->6 ->

