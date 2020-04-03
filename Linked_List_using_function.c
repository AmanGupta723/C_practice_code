#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
int push (struct node **head_reference, int data1)
{struct node* new_node;
     (*head_reference)->link=(struct node*)malloc(sizeof(struct node));   
	 new_node=(*head_reference)->link;
	 new_node->link=NULL;
	 new_node->data=data1;
	 *head_reference=new_node;
    // printf("ss");
} 

int  print(struct node* ptr)
{
	
	while(ptr!=0)
	{
			ptr=ptr->link;
		printf("%d",ptr->data);
	
	}
}

int main()
{
int i;
struct node *head,*p;
head= (struct node*)malloc(sizeof(struct node));
p=head;
head->link = NULL;
for (i=0;i<3;i++)
push(&head,i);	
print(p);

}
