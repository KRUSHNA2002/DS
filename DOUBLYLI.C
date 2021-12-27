#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node * next;
}*head,*tail,*newnode;
void create()
{
	char ch;
	do
	{
		newnode = (struct node *) malloc(sizeof(struct node));
		newnode ->next = NULL;
		newnode ->prev = NULL;
		printf("Enter data\n");
		scanf("%d",&newnode->data);
		if(head == NULL)
		{
			head = newnode;
			tail = newnode;
			newnode->next = head;
			}
		else
		{
			tail->next = newnode;
			newnode->prev = tail;
			newnode->next = head;
			tail = newnode;
		}
		printf("Do you want to create another node\n");
		fflush(stdin);
		ch = getchar();
	}while(ch!='n');
}
void display()
{
	struct node *temp;
	temp = head;
	while (temp!=tail)
	{
		printf("%d ",temp->data);
	temp = temp->next;
	}
	printf("%d\n",temp->data);
}
void insert_at_begin()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->data);
	newnode -> prev = tail;
	newnode -> next = tail->next;
	head = newnode;
}
void insert_at_end()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;
	printf("Enter data\n");
	scanf("%d",&newnode->data);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = head;
	tail = newnode;
}
void insert_at_pos()

{
	int i = 1,count = 0,pos;
	struct node * temp;
	temp = head;
	while(temp!=tail)
	{
		temp = temp->next;
		count++;
	}
	printf("The length of the link list is %d\n");
	printf("Enter pos\n");
	scanf("%d",&pos);
	if(pos>count)
	{
		printf("Invalid input");
	}
	else
	{
		temp = head;
		while(i<(pos-1)
		{
			temp=temp->next;
			i++;
		}
	}
	newnode= (struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->data);

}

int main()
{
int ch;
clrscr();
while(1)
{

printf("Enter your choice\n");
printf("1. create\n");
printf("2. display\n");
printf("3. Insert at begin\n");
printf("4. Insert at end\n");
printf("5. Insert at pos\n");
printf("6. exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1: create();
	break;
case 2: display();
	break;
case 3: insert_at_begin();
	break;
case 4: insert_at_end();
	break;
case 5: insert_at_pos();
	break;
case 6: exit(0);
default : printf("Invalid input\n");

}
}
getch();
return 0;
}