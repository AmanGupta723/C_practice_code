#include<stdio.h>
 struct node{
 	int data;
 	struct node *next;
 };
int main()
{int i,size=0; 
struct node *head, *traver;
head=(struct node*)malloc(sizeof(struct node));
traver=head;
head->next=NULL;
	for(i=0;i<5;i++)
	push(i,&head);
	printf("------------------------------------------------PUSHING THE DATA INTO THE STACK\n---------------------");
	printf("\nTRAVERSE THE ELEMENT OF THE STACK\n");
	traverse(traver,&size);
	printf("\n Size of the stack");
	printf("\n%d\n",size);
	printf("\n\n\n\n\nPOP THE DATA FORM THE STACK\n");
	pop(traver,&size);
	printf("Size after the pop\n%d\n",size);
    printf("Element after the POPING\n");
	traverse(traver,&size);

}
int push(int data1, struct node** head)
{ struct node* new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	(*head)->next=new_node;
	new_node->data=data1;
	new_node->next=NULL;
	*head = new_node;	
}
int traverse(struct node* head,int *size)
{
struct node* ptr;
*size=0;
ptr =head->next;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		(*size)=(*size)+1;
			ptr=ptr->next;
	}
}
int pop(struct node* last,int *size)
{
	int count=0;
*size=*size-1;

    while(last!=NULL)
	{
		last=last->next; 
		count++;
		if(count==(*size))
		{
		last->next=NULL;
			break;
	}
		if(last->next==NULL)
	{
		printf("\n Stack is Empty \n");
	}

	}
}
