#include<stdio.h>
#include<conio.h>
struct node
{
 int data;
 struct node *next;
}*top;
void push(int value)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=value;
 newnode->next=NULL;
 if(top==NULL)
 {
  top=newnode;
 }
 else
 {
  newnode->next=top;
  top=newnode;
 }
 printf("\n insertion is success !!! \n");

}

void pop()
{
 if(top==NULL)
 {
  printf("stack is empty !!! \n");
  }
  else
  {
  struct node *temp=top;
  top=top->next;
  printf(" \n deleted elements %d", temp->next);
  free(temp);

  }
 }
 void display()
 {
 if(top==NULL)
 printf("stack is empty");

else
{
 struct node *temp=top;
 while(temp!=NULL)
 {
  printf("%d", temp->data);
  temp=temp->next;

 }
 printf("NULL");
}
}
void main()
{
 int choice,value;
 clrscr();
 printf("\n :: stack using linklist \n");
 while(1)
 {
  printf("\n MENU \n");
  printf("n1.push \n2.pop \n3.display \n4.exit \n");
  printf("enter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("Enter the value to be insert");
   scanf("%d",&value);
   push(value);
   break;
   case 2:pop();
   break;
   case 3:display();
   break;
   case 4:exit(0);
   default:printf("\n wrong selection !!! please try again");
  }
 }
}